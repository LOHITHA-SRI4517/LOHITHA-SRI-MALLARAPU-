#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("ENTER A B C VALUES:");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\nGREATEST VALUE IS:%2d",max);
	return 0;
}
