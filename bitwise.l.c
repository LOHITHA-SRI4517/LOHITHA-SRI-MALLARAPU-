#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER ANY 2 NUMBERS:");
	scanf("%d %d",&a,&b);
	printf("\nTHE BITWISE OPERATOR FOR AND IS:%d",a&b);
	printf("\nTHE BITWISE OPERATOR FOR OR GATE IS:%d",a|b);
	printf("\nTHE BITWISE OPERATOR FOR XOR IS:%d",a^b);
	printf("\nTHE BITWISE OPERATOR FOR LEFT SHIFT IS:%d",a<<b);
	printf("\nTHE BITYWISE OPERATOR FOR RIGHT SHIFT IS:%d",a>>b);
}
