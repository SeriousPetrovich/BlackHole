#include <stdio.h>

int fib(int n)
{
    if (n == 0) {return 0;}
    else
    {
        if ((n == -1) || (n == 1)) {return 1; }
        else 
        {
            if (n>0) {return fib(n - 1) + fib(n - 2); }
            else { return fib(n + 2) - fib(n + 1); }
        }
    }
}
int main()
{

	int i,n;
	printf("Введите длину последовательности чисел Фибоначчи: ");
	scanf("%d",&n);
	printf("№     Число\n");
	for(i=1;i<=n;i++)
	{
		if (i>9){for(i=10;i<=n;i++)
		{printf("%d    %d\n",i,fib(i));}return 0;}
		printf("%d     %d\n",i,fib(i));
	
	}
	return 0;
}
