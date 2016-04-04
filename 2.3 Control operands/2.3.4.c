#include <stdio.h>
#include <math.h>

int main()
{
	float A,B,C,D,x1,x2;
	printf("Пожалуйста, введите коэффициенты А, В и С квадратного уравнения A*x^2+B*x+C=0:\n");
	printf ("A = ");
	scanf("%f",&A);
	printf ("B = ");
	scanf("%f",&B);
	printf ("C = ");
	scanf("%f",&C);
	D=pow(B,2)-4*A*C;
	if (D<0) {printf("Ошибка, дискриминант меньше нуля");return 0;};
	x1=(-B+pow(D,0.5))/2*A;
	if (D==0) {printf("Дискриминант равен нулю.\nКорень уравнения:\nx = %.3f",x1);return 0;};
	x2=(-B-pow(D,0.5))/2*A;
	printf("Корни уравнения:\nx1 = %.3f\nx2 = %.3f",x1,x2);
	return 0;
}
