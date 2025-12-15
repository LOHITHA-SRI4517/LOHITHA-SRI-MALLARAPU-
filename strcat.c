#include<stdio.h>
#include<string.h>
int main()
{
	char a[200],b[200];
	printf("ENTER ANY STRING:");
	fgets(a,200,stdin);
	strcat(b,a);
	printf("CONCATANATED DATA IS: %s",a);
}
