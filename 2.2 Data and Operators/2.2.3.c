#include <stdio.h>
#include <string.h>
int main() 
{
	char string[254];
	printf("Please, enter a random string : ");
	gets(string);
	printf("In your string %d bytes",strlen(string));
	return 0;
}
