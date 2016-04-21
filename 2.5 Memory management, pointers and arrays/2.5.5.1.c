#include <stdio.h>
#include <stdlib.h>

int Det(int **matr, int m) 
{
  int i,j,D,k,n;
  int **p;
  p = (int**)malloc(sizeof(int*)*m);
  for(i=0;i<m;i++)
    p[i] = (int*)malloc(sizeof(int)*m);
    j=0; D=0;
    k=1;
    n=m-1;
  if (m<1)  
  {
  return D;
	}
  if (m==1) {
    D = matr[0][0];
    return(D);
  }
  if (m==2) {
    D=matr[0][0]*matr[1][1]-(matr[1][0]*matr[0][1]);
    return(D);
  }
  if (m>2){
    for (i=0;i<m;i++) {
      printf("%d ", matr[i][j]);
      D = D + k * matr[i][0] * Det(p,n);
      k=-k;
    }
  }
  return(D);
}
