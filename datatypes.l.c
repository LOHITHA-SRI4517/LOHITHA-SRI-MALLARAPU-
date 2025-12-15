#include<stdio.h>
int main(){
	int a,b;
	float d,c;
	printf("ENTER THE VALUES OF A B C D:");
	scanf("%d %d %f %f",&a,&b,&d,&c);
	printf("\nADDITION OF 2 VALUES:%d",a+b);
	printf("\nSUBTRACTION OF 2 VALUES:%d",a-b);
	printf("\nMULTIPLICATION OF 2 VALUES:%.2f",c*d);
	printf("\nDIVISON OF 2 VALUES IS:%.2f",c/d);
}
