#include <stdio.h>
#define max(p,z) if(p>z) {printf("       %d\n",p);} else printf("       %d\n",z);

int main()
{
	int i,N;
	printf("Введите количество пар: ");
	scanf("%d",&N);
	    printf("№      Пара      Большее\n");
	int l=5,a = 3, b = 2, c=9, m=9;
	for(i=1;i<=N;i++)
	{
		printf("%d",i);
		a = ((c*b+l) % m);
		b=b+2;c=c+3;
		l = ((c*b+a) % m);
		printf("      %d %d",a,l);
		max(a,l);
		b=b+8;c=c+4;
		
	}
	return 0;
}
