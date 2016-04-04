#include <stdio.h>
 
int main() 
{
	char s[255];
	printf("Пожалуйста, напишите случайную строчку: ");
	scanf("%s",s);
	char simbol=s[0];
	int n=0;
	while (s[n] !=0)
	{
		if (s[n]>simbol)
		simbol=s[n];
		n++;
	}
	printf("%c - этот символ из вашей строки имеет наибольший ASCII код",simbol);
    return 0;
}

