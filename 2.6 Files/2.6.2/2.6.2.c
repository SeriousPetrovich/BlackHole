#include <stdio.h>
#include <stdlib.h>

int main () 
{
	FILE *f;
   	FILE *p;
    f=fopen("begin.txt", "r");
    p=fopen("end.txt", "w");
    int n=0;
	char key[6]={'0', '1', '1', '0', '1', '1'};
	char simbol;
    while(feof(f) == 0) 
    {
    fread(&simbol, 1, 1, f);
    if(simbol != '\n') 
    {
		n = (n == 6) ? n : 0;
		simbol^=key[n];
		n++;
    }
    fwrite(&simbol, 1, 1, p);
    }	
    fclose(f);
    fclose(p);
    return 0;
}
