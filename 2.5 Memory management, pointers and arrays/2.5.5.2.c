#include <stdio.h>
#include <assert.h>
#include "2.5.5.1.c"

int main() {
	int n,i,j,c;
	float D,d;
	int **matr;
	printf("Введите размерность квадратной матрицы: ");
	scanf("%d", &n);
	matr=(int**)malloc(sizeof(int*)*n);
	for(i=0;i<n;i++) 
	{
		matr[i]=(int*)malloc(sizeof(int)*n);
		for(j=0;j<n;j++) 
		{
			printf("Элемент [%d][%d]= ",i+1,j+1);
			scanf("%d",&matr[i][j]);
		}
	}
	D=Det(matr,n);
	assert(D!=0);
	int svob[n];  
	printf("Введите столбец свободных коэффициентов:\n");
	for(i=0;i<n;i++)
	{
		printf("Элемент [%d] = ",i+1);
		scanf ("%d",&svob[i]);
	}
	printf("Корни системы уравнений:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c=matr[j][i];
			matr[j][i] = svob[j];
			svob[j]=c;
		}
		d=Det(matr,n);
		printf("x%d=%f\n",i+1, d/D);
		for(j=0;j<n;j++)
		{
			c=svob[j];
			svob[j] = matr[j][i];
			matr[j][i]=c;
		}
	}
	return 0;
}
