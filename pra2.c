#include<stdio.h>
#include<math.h>
int main(){
	float p,t,r,si,ci,amount;
	printf("ENTER PRINCIPLE AMOUNT(p):");
	scanf("%f",&p);
	printf("ENTER TIME IN YEARS(t):");
	scanf("%f",&t);
	printf("ENTER RATE OF INTREST(r):");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("SIMPLE INTREST=%f\n",si);
	amount=p*pow((1+r/100),t);
	ci=amount-p;
	printf("COMPOUND INTREST=%f\n",ci);
}
