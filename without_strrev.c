#include<stdio.h>
int main(){
	int len,i;
	char a[200],b[200];
	printf("ENTER THE STIRNG:");
	gets(a);
	for(i=0;a[i]!=0;i++){
		len++;
	}
	for(i=len-1;i>=0;i--){
		printf("%c",a[i]);
	}
}
