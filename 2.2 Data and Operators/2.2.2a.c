#include <stdio.h> 

int main() 
{	
	printf("DEC     HEX  Simbolo\n");
	printf("  0            NUL\n  1            SOH\n  2            STX\n  3            ETX\n  4            EOT\n  5            ENQ\n  6            ACK\n  7            BEL\n  8             BS\n  9             HT\n");
	printf(" 10             LF\n 11             VT\n 12             FF\n 13             CR\n 14             SO\n 15             SI\n 16            DLE\n 17            DC1\n 18            DC2\n 19            DC3\n");
	printf(" 20            DC4\n 21            NAK\n 22            SYN\n 23            ETB\n 24            CAN\n 25             EM\n 26            SUB\n 27            ESC\n 28             FS\n 29             GS\n");
	printf(" 30             RS\n 31             US\n 32             ES\n");
	int i;
	for (i=33;i<=126;i++) 
	{
		printf("%3d    %#x     %c\n",i,i,i);
	} 
	printf("127            DEL");
	printf("\n"); 
	return 0;
}
	
