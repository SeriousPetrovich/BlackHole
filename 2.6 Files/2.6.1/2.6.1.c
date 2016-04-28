#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{	
	FILE *f;
	FILE *p;
	f=fopen("Text.txt","r");
	p=fopen("FinishText.txt","w");
	char string[250];
	char **mas1;
	char *mas2;
	int n = 1, *amount, t = 0, i = 0, j;
	fscanf(f,"%s",string);
	mas1 = (char**)malloc(n * sizeof(char*));
	mas1[n-1] = (char*)malloc(sizeof(char) * strlen(string) + 1);
	strcpy(mas1[n-1], string);
	amount = (int*)malloc(sizeof(int) * n);
	amount[n-1] = 1;
	while (fscanf(f,"%s",string) !=EOF)
	{	
		for(i = 0; i < n; ++i)
		{   		
			if(strcmp(mas1[i],string) == 0)
			{
				amount[i]++;
				t = 1;
			}
		}
		if(!t)
		{
			n++;
			mas1 = (char**)realloc(mas1, n * sizeof(char*));
			mas1[n-1] = (char*)malloc(sizeof(char) * strlen(string) + 1);
			strcpy(mas1[n-1], string);
			amount = (int*)realloc(amount, sizeof(int) * n);
			amount[n-1] = 1;
		}
	t = 0;
	}
	fclose(f);
	fprintf(p,"Это ваши слова в порядке убывания их встречаемости:\n"
			  "Слово               Встречаемость\n");
	for (j=0; j<=n-1;j++)
	{
		for (i=0;i<n-j-1;i++)
		{
			if (amount[i] > amount[i+1])
			{
				int tmp = amount[i];
				mas2 = mas1[i]; 
				amount[i]=amount[i+1];
				mas1[i]=mas1[i+1];
				mas1[i+1]=mas2;
				amount[i+1] = tmp;	
			}
		}
	fprintf(p,"%12s%20d \n",mas1[i], amount[i]);
	}
fclose(p);
return 0;
}