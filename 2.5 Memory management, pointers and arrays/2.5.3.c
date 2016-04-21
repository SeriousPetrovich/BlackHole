#include <stdio.h>
#include <string.h>
int main(void)
{
    char st[256];
    printf("Пожалуйста, введите здесь свою строку: ");
    scanf("%s",st);
    printf("Символы вашей строки по частоте их встречаемости: \n");
char a[]="qwertyuiopasdfghjklzxcvbnm`~!@#$%^&*(){}[];'\"\\/,.<>";

    int b[52]={0},i,j,dl;
    dl=strlen(st);
    for(i=0;i!=dl;i++)
    {
        for(j=0;j<52;j++)
        {
            if(a[j]==st[i])
               b[j]=b[j]+1;
                           }
                       }
           for(i=0;i<=dl;i++)
           {
           for(j=0;j<52;j++) 
           {
           if(b[j]!=0 && b[j]==i)
           {
           printf("%c ",a[j]);
           }
                    
        }
        }
    return( 0);
}
