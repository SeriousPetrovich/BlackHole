#include <stdio.h>

int main(void)
{
	int date;
	int months;
	int years;
	int days;
	printf("Write the number of days = ");
	scanf("%d", &date);
	years=date/365;
	months=(date-365*years)/30;
	days=date-365*years-30*months;
	printf("In %d day(s) %d year(s), %d month(s), %d day(s)\n",date,years,months,days);
	return 0;
}
