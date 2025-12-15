#include<stdio.h>
int main(){
	int i;
	char a[200];
	printf("ENTER THE STRING:");
	gets(a);
	for(i=0;a[i]!=0;i++){
	if(a[i]>=97&&a[i]<=122){
		a[i]=a[i]-32;
	}
	}
	printf("UPPER CASE STRING IS :%s",a);
}

