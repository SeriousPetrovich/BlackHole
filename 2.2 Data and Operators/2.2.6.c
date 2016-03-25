#include <stdio.h>


int fact(int N)
	{
		if (N == 0) return 1;
		else return N*fact(N-1);
	}
	
int main()
{
	int N;
	printf("Please, enter random number = ");
	scanf("%d", &N);
	printf("Result = %d",fact(N));
	return 0;
}
