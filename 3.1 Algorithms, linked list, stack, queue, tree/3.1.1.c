#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct telbook *start;
struct telbook *last;
struct telbook *find(char *);
struct telbook
{
    char name[20];
    char  number[12];
    struct telbook *next; 
    struct telbook *prior;
};
void enter(void), search(void), save(void);
void load(void), list(void);
void mldelete(struct telbook **, struct telbook **);
void dls_store(struct telbook *i, struct telbook **start, struct telbook **last);
void inputs(char *, char *, int), display(struct telbook *);
int menu_select(void);
int main(void)
{
    start = last = NULL;
    for(;;) {
        switch(menu_select()) {
            case 1: enter();
              break;
            case 2: mldelete(&start, &last);
              break;
            case 3: list();
              break;
            case 4: search();
              break;
            case 5: save();
              break;
            case 6: load();
              break;
            case 7: exit(0);          
        }
    }
    return 0;
}
int menu_select(void)
{
    char s[80];
    int c;
    printf("1 - Запись контакта\n"); 
    printf("2 - Удаление контакта\n");
    printf("3 - Весь список\n");
    printf("4 - Поиск\n");
    printf("5 - Сохранение в файл\n");
    printf("6 - Чтение из файла\n");
    printf("7 - Выход\n");
    do {
        printf("\n: ");
        fgets(s, sizeof(s), stdin);
        c=atoi(s);
    }while(c<1 || c>7);

    return c;
}
void enter(void)
{
    struct telbook *info;
        info=(struct telbook *)malloc( sizeof(struct telbook));
        if(!info) {
            printf("\nНедостаточно памяти");
            return;
        }
        inputs("Пожалуйста, введите имя: ", info->name, 20);
        inputs("Пожалуйста, введите номер телефона: ", info->number, 12);
        dls_store(info, &start, &last);
    
}
void inputs(char *prompt, char *s, int count)
{
    char p[255];
    do {
        printf("%s", prompt);
        fgets(p, 254, stdin);
        if(strlen(p)>count) printf("\nСтрока слишком длинная\n");
    }while(strlen(p)>count);
    p[strlen(p)-1]=0;
    strcpy(s, p);
}
void dls_store(struct telbook *i, struct telbook **start, struct telbook **last)
{
    struct telbook *old, *p;
    if(*last==NULL) {
        i->next=NULL;
        i->prior=NULL;
        *last=i;
        *start=i;
        return;
    }
    p= *start;
    old=NULL;
    while(p) {
        if(strcmp(p->name, i->name)<0) {
            old=p;
            p=p->next;
        }
        else {
            if(p->prior) {
                p->prior->next=i;
                i->next=p;
                i->prior=p->prior;
                p->prior=i;
                return;
            }
            i->next=p;
            i->prior=NULL;
            p->prior=i;
            *start=i;
            return;
        }
    }
    old->next=i;
    i->next=NULL;
    i->prior=old;
    *last=i;
}
void mldelete(struct telbook **start, struct telbook **last)
{
    struct telbook *info;
    char s[80];
    inputs("Пожалуйста, введите имя: ", s, 20);
    info=find(s);
    if(info) {
        if(*start==info) {
            *start=info->next;
            if(*start) (*start)->prior=NULL;
            else *last=NULL;
        }
        else {
            info->prior->next=info->next;
            if(info!=*last)
                info->next->prior=info->prior;
            else
                *last=info->prior;
        }
        free(info);
    }
}
struct telbook *find( char *name)
{
    struct telbook *info;
    info=start;
    while(info) {
        if(!strcmp(name, info->name)) return info;
        info=info->next;
    }
    printf("Контак не найден\n");
    return NULL;
}
void list(void)
{
    struct telbook *info;
    info=start;
    while(info) {
        display(info);
        info=info->next;
    }
    printf("\n\n");
}
void display(struct telbook *info)
{
    printf("%s\n", info->name);
    printf("%s\n", info->number);
    printf("\n\n");
}
void search(void)
{
    char name[20];
    struct telbook *info;
    printf("Пожалуйста, введите имя: \n");
    scanf("%s", name);
    info=find(name);
    if(!info) printf("не найдено\n");
    else display(info);
}
void save(void)
{
    struct telbook *info;
    FILE *fp;
    fp=fopen("telbook.txt", "wb");
    if(!fp) {
        printf("нельзя открыть файл\n");
        exit (1);
    }
    printf("\nсохранение в файле\n");
    info=start;
    while(info) {
        fwrite(info, sizeof(struct telbook), 1, fp);
        info=info->next;
    }
    fclose(fp);
}
void load()
{
    struct telbook *info;
    FILE *fp;
    fp=fopen("telbook.txt", "rb");
    if(!fp) {
        printf("нельзя открыть файл\n");
        exit (1);
    }
    while(start) {
        info=start->next;
        free(start);
        start=info;
    }
    start=last=NULL;
    printf("\nчтение из файла\n");
    while(!feof(fp)) {
        info =(struct telbook *)malloc( sizeof(struct telbook));
        if (!info) {
            printf("нет свободной памяти\n");
            return;
        }
        if(1 !=fread(info, sizeof(struct telbook), 1, fp)) break;
        dls_store(info, &start, &last);
    }
    fclose(fp);
}
