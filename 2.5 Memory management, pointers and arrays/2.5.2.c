#include <stdio.h>
#include <string.h>
int main (void)
{
	char line1[254],line2[254],new;
	 printf("Пожалуйста, введите здесь свою строчки через пробел: ");
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
     
     int j=0,l;
      while(line2[j]!='\0') j++;
       j--;
      for(l=0;l<j;l++,j--) 
       {
          new=line2[l];
          line2[l]=line2[j];
          line2[j]=new;
          }
	  printf("  Инвертированная строка: %s",line2);
	 return 0;
}
