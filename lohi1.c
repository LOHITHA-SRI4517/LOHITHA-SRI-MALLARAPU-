#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,sum=0,*arr;
	printf("ENTER N VALUE:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("MEMORY IS NOT ALLOCATED");
	}
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
	printf("%d",sum);
	}
}
