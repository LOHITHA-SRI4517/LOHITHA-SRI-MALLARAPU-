#include<stdio.h>
int main()
{
	float celsius,faranheit;
	printf("ENTER TEMPERATURE:");
	scanf("%f",&faranheit);
	//celsius=faranheit-32/1.8;
	//printf("\n celsius temperature is:%f",celsius);
	faranheit=(celsius*9/5)+32;
	printf("\n FARANHEIT TEMPERATURE IS:%.2f",faranheit);
}
