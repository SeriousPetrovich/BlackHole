#include <stdio.h>

int main(void)
{
	float speed, angle, sina, t, a;
	printf("Please, enter a starting speed of stone in meters per second = ");
	scanf("%f",&speed);
	printf("Please, enter a angle of horizont in degrees = ");
	scanf("%f",&angle);
	a=angle*3.141592/180;
	sina=a-(a*a*a/6)+(a*a*a*a*a/120)-(a*a*a*a*a*a*a/5040)+(a*a*a*a*a*a*a*a*a/362880);
	t=2*speed*sina/10;
	printf("It is time of flying of stone t = %f",t);
	return 0;
}
