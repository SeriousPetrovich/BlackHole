#include <stdio.h>
#include <float.h>
int main(void) 
{
	printf("Number of bytes in:\n\n");
	printf("Char         	   = %zd;\n",sizeof (char));
	printf("Short        	   = %zd;\n",sizeof (short));
	printf("Int          	   = %zd;\n",sizeof (int));
	printf("Long               = %zd;\n",sizeof (long));
	printf("Long long          = %zd;\n",sizeof (long long));
	printf("Float		   = %zd;\n",sizeof (float));
	printf("Double 		   = %zd;\n",sizeof (double));
	printf("Long double 	   = %zd.\n",sizeof (long double));
	return 0;
}


