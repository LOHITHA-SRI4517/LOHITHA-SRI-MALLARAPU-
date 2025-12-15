#include<stdio.h>
int sum_of_digits(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int i,num;
	for(i=0;i<5;i++){
		scanf("%d",&num);
		printf("SUM OF DIGITS=%d\n",sum_of_digits(num));
	}
}

