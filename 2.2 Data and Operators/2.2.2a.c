#include <stdio.h> 

int main() 
{
	printf("   0-NUL 1-SOH   2-STX  3-ETX  4-EOT  5-ENQ  6-ACK  7-BEL  8-BS   9- HT\n");
	printf("  10-LF  11-VT  12-FF  13-CR  14-SO  15-SI  16-DLE 17-DC1 18-DC2 19-DC3\n");
	printf("  20-DC4 21-NAK 22-SYN 23-ETB 24-CAN 25-EM  26-SUB 27-ESC 28-FS  29-GS\n");
	printf("  30-RS  31-US  32-ES");
	int i; 
	for (i=33;i<=126;i++) 
	{
	printf(" %3d-%c ",i,i); 
	if (i%10 == 0) printf("\n"); 
	} 
printf(" 127-DEL");
printf("\n"); 
return 0;
}
