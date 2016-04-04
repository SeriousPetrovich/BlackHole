#include <stdio.h>
#include <math.h>
 
int main() 
{
	float a,b;
	char s;
	printf("Пожайлуста, введите свое выражение (пример 2+2): ");
	scanf("%f%c%f",&a,&s,&b);
	if (s=='+') {printf("%f%c%f=%.3f",a,s,b,a+b);}
	if (s=='-') {printf("%f%c%f=%.3f",a,s,b,a-b);}
	if (s=='*') {printf("%f%c%f=%.3f",a,s,b,a*b);}
	if (s=='/') {if(b==0) {printf("Деление на ноль невозможно.");return 0;}printf("%f%c%f=%.3f",a,s,b,a/b);}
	if (s=='%') {if(b==0) {printf("Деление на ноль невозможно.");return 0;}int c=a,d=b;printf("%d%c%d=%d",c,s,d,c%d);}
	if (s=='^') {printf("%f%c%f=%.3f",a,s,b,pow(a,b));}
    return 0;
}

