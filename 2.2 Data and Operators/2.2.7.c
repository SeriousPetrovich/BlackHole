#include <stdio.h>

int main() 
{
	int a = 3, b = 5, c=8, m, n=0;
	printf("Please, enter your sequence of your length = ");
    scanf("%d",&m);
    printf("It is your length of pseudo-random numbers from your %d: \n",m);
    for(n = 0; n<m; n++) 
	{ 
		a = ((b*a+c) % m); 
		printf("%d ", a); 
		b=b+7;c=c+2;
	}
    return 0;
}
