#include <stdio.h>

int main(void) 
{ 	
	int day,month,stek;
	day=21;
	month=05;
	stek=day;
	day=month;
	month=stek;
	printf("%d/%d",day,month);
	return 0;
}
