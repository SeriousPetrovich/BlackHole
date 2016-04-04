#include <stdio.h>

char *change(char *c)
 {
    char *a, *b;
    for(a=b=c;*a;*a =*b) 
    {
        if(*b!=*(b + 1))
        a++;
        b++;
    }
    return c;
}

int main() 
  {
  char c [255];
  printf("Пожалуйста, напишите случайную строчку: ");
  scanf("%s",c);
  printf("\n%s", change(c));
  return 0;
}
