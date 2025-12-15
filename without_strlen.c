#include<stdio.h>
int main()
{
	char a[200]="Lohi";
	int len=0,i;
	for (i=0;a[i]!=0;i++){
		len++;
	}
	printf("Length of the string is:%d",len);
}
