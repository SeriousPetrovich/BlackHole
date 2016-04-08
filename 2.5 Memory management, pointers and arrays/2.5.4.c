#include <stdio.h>
#include <assert.h>

int main()
{
	int i=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h,o,j,k,l,m,n;
	char text[255];
	printf("Please, enter a random word in lower register:\n");
	scanf("%s", text);
	while (text[i] != 0)
	{
		if (text[i]=='(') a++;
		if (text[i]==')') a--;
		if (text[i]=='[') b++;
		if (text[i]==']') b--;
		if (text[i]=='{') c++;
		if (text[i]=='}') c--;
		if (text[i]=='<') d++;
		if (text[i]=='>') d--;
		if (text[i]=='"') e++;
		if (text[i]==39) f++;
		if (text[i]=='`') g++;
		i++;
	}
	assert(a>=0);
	assert(b>=0);
	assert(c>=0);
	assert(d>=0);
	assert(e>=0);
	assert(f>=0);
	assert(g>=0);
	printf("This is your word in upper register:\n");
	printf("%s",text);
	for (h=0;h!=a;h++){printf(")");}
	for (o=0;o!=b;o++){printf("]");}
	for (j=0;j!=c;j++){printf("}");}
	for (k=0;k!=d;k++){printf(">");}
	if (e%2!=0){for (l=0;l!=e;l++){printf("\"");}}
	if (f%2!=0){for (m=0;m!=f;m++){printf("\'");}}
	if (g%2!=0){for (n=0;n!=g;n++){printf("`");}}
	return 0;
}
