#include<stdio.h>
int main()
{
	float f,c;
	printf("ENTER TEMPERATURE IN FARANHEIT:");
	scanf("%f",&f);
	c=(5.0/9.0)*(f-32);
	printf("TEMPERATURE IN CELSIUS IS:%.2f",c);
	return 0;
}
