#include<stdio.h>
#include<string.h>
int main()
{
	char a[200];
	printf("ENTER ANY STRING:");
	gets(a);
	//fgets(a,200,stdin);
	strrev(a);
	printf("REVERSED DATA IS: %s",a);
//	puts(a);
}
