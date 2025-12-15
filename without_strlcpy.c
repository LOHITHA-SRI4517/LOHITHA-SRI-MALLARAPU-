#include<stdio.h>
int main(){
	int i;
	char a[100],b[200];
	printf("ENTER THE STIRNG:");
	gets(a);
	for(i=0;a[i]!=0;i++){
		b[i]=a[i];
	}
	printf("COPIED STRING IS:%s",b);
}
