#include <stdio.h>

int main()
{
int a,b;
printf("Please, enter the first number a = ");
scanf("%d",&a);
printf("Please, enter the second number b = ");
scanf("%d",&b);
int gcd(int a, int b) 
	{
	if (b == 0) return a;
	return gcd(b, a % b);
	}
printf("This is their Greatest Common Divisor = %d",gcd(b, a % b));
return 0;
}
