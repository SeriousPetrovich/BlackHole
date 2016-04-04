#include <stdio.h>
 
int main() {
    int A[100];
    int n, i, j;
    printf("Введите высоту треугольника Паскаля: ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++ ) 
    {
        A[i] = 0;
    }
    for ( j = 0; j < n; j++ ) 
    { 
      printf(" ");
        for ( i = j; i >= 1; i-- ) 
        {
            A[0] = 1;
            A[i] = A[i-1] + A[i];
            printf("%d ", A[i]);
        }
        printf("1\n");
    }
    return 0;
}
