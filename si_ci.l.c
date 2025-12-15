#include<stdio.h>
#include<math.h>
int main(){
	float p,t,r,amount,ci,si;
	printf("ENTER PRINCIPLE VALUE(p):");
	scanf("%f",&p);
	printf("ENTER TIME(t) IN YEARS:");
	scanf("%f",&t);
	printf("ENTER RATE(r):");
	scanf("%f",&r);
	si=p*t*r/100;
	printf("SIMPLE INTREST IS:%.2f\n",si);
	amount=p*pow((1+r/100),t);
	ci=amount-p;
	printf("COMPOUND INTRESTT IS:%.2f",ci);
	return 0;
}
