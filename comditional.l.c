#include<stdio.h>
int main(){
	int a,b,c;
	printf("ENTER A AND B VALUES AND C VALUES :");
	scanf("%d %d %d",&a,&b,&c);
	printf("RESULT=%d",a==b?b:c);
}
