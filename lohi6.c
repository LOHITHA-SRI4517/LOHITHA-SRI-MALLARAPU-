#include<stdio.h>
int sum_of_digits(int n){
	int sum=0;
	while(n>0){
	sum=sum+n%10;
	n=n/10;
	}
	return sum;
}
int main(){
	int n;
	printf("ENTER NUMBER:");
	scanf("%d",&n);
	printf("SUM OF DIGITS IS:%d",sum_of_digits(n));
	}

