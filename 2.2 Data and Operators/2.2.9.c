#include <stdio.h>
#include <string.h>
int main(void) 
{
	int amount=0,sum=0,number;
	printf("Please, enter random number: ");
	scanf("%d",&number);
	while (number!=0)
	{
		sum+=number%10;
		number/=10;
		amount++;
	}
	printf("Amount of digits = %d;\nSum of digits = %d;\nAverage of digits = %.2lf", amount, sum, (float)sum/(float)amount);
	return 0;
}
