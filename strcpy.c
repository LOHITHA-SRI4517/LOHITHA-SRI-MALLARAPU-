#include<stdio.h>
#include<string.h>
int main()
{
	char a[200]="Lohi";
	char b[200];
	strcpy(b,a);
	printf("COPIED DATA IS: %s",b);
	//puts(b);
}
