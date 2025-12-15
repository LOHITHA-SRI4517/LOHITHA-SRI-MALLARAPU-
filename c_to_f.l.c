#include<stdio.h>
int main()
{
	float f,c;
	printf("ENTER TEMPERATURE IN CELSIUS:");
	scanf("%f",&c);
	f=(c*9.0/5.0)+32;
	printf("TEMPERATURE IN FARANHEIT IS:%.2f",f);
	return 0;
}
