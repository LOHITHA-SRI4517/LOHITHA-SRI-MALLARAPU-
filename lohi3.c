#include<stdio.h>
#include<math.h>
int main(){
	float p,t,r,si,ci,amount;
	printf("ENTER P VALUE:");
	scanf("%f",&p);
	printf("ENTER TIME:");
	scanf("%f",&t);
	printf("ENTER RATE OF INTREST:");
	scanf("%f",&r);
	si=p*t*r/100;
	printf("SI=%.2f\n",si);
	amount=p*pow((1+r/100),t);
	ci=amount-p;
	printf("CI=%.2f",ci);
}
