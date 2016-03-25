#include <stdio.h>

int main()
{
	int i=0;
	char text[255];
	printf("Please, enter a random word in lower register:\n");
	scanf("%s", text);
	while (text[i] != 0)
	{
		text[i]=text[i]-32;
		i++;
	}
	printf("This is your word in upper register:\n");
	printf("%s",text);
	return 0;
}
