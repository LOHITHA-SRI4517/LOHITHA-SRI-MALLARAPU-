#include<stdio.h>
#include<string.h>
int main()
{
	char a[200]="LOHI";
	char b[200]="Lohi";
	int x;
	x=strcmp(b,a);
	printf("COMPARED DATA IS:%d",x);
}
