#include <stdio.h>

int main(void)
{
	int  summ, diff, mul;
	float divi, number1, number2; //Числа с плавающей запятой, чтобы при делении на 0 программа не ломалась
	printf("Please, enter first integer = ");//Здесь учитывается, что пользователь должен ввести именно целые числа
	scanf("%f", &number1);
	printf("Please, enter second integer = ");//И здесь
	scanf("%f", &number2);
	summ=number1+number2;
	diff=number1-number2;
	mul=number1*number2;
	divi=number1/number2;
	printf("This is their:\n");
	printf("Sum            = %d\n",summ);
	printf("Difference     = %d\n",diff);
	printf("Multiplication = %d\n",mul);
	printf("Division       = %f\n",divi);
	return 0;
}
