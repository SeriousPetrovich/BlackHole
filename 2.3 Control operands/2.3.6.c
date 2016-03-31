#include <stdio.h>

int main()
{
	int a,b=0;
	printf("Please, enter a percent of progress: ");
	scanf("%d",&a);
	if (a>100) printf("Error, your percent > 100");
	if (a>100) return 0;
	
	printf("%d%% ~ [",a);
	a=a/5;	
	while (b!=a)
	{
		printf("%c",61);
		b++;
	}
	while (b!=20)
	{
		printf(" ");
		b++;
	}
	printf("]");
	return 0;
}
