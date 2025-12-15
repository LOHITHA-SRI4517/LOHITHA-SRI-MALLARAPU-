#include<stdio.h>
int main(){
	float u,a,s,t;
	printf("ENTER INITIAL VELOCITY(u):");
	scanf("%f",&u);
	printf("ENTER ACCELARATION(a):");
	scanf("%f",&a);
	printf("ENTER TIME(t):");
	scanf("%f",&t);
	s=(u*t)+(0.5*a*t*t);
	printf("DISTANCE TRAVELLED IS:%.2f\n",s);
	return 0;
}
