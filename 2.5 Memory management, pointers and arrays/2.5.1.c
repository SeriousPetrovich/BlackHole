#include <stdio.h>
#include <string.h>
int main (void)
{
	char line1[254];
	char line2[254];
	 printf("Пожалуйста, введите здесь свои строчки через пробел: ");
	 scanf("%s %s",line1,line2);
	void Copy(char* a, char* b)
    {
		*b=*a;
		}
		
	int i;
	 for ( i=0;i!=strlen(line1);i++)
	 {
	   Copy(&line1[i],&line2[i]);
     }
	   printf("%s",line2);

	 return 0;
}
