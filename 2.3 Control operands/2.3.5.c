#include <stdio.h>
#include <math.h>

int main()
{
	int x,y,m,n,a,b,xAB,yAB,xBC,yBC,xCA,yCA,AB_BC,BC_CA,CA_AB;
	printf("Пожалуйста, введите координаты вершин треугольника АBC через пробел:\n");
	printf ("A = ");
	scanf("%d %d",&x,&y);
	printf ("B = ");
	scanf("%d %d",&m,&n);
	printf ("C = ");
	scanf("%d %d",&a,&b);
	xAB=m-x; yAB=n-y; xBC=a-m; yBC=b-n; xCA=x-a; yCA=y-b;
	AB_BC=xAB*xBC+yAB*yBC; BC_CA=xBC*xCA+yBC*yCA; CA_AB=xCA*xAB+yCA*yAB;
	if ((AB_BC==0)&&(BC_CA==0)&&(CA_AB==0)) {printf("Вы ввели точку.");return 0;}
	if ((AB_BC==0)||(BC_CA==0)||(CA_AB==0)) {printf("Ваш треугольник является прямоугольным.");return 0;}
	else printf("Ваш треугольник не является прямоугольным.");
	return 0;
}

