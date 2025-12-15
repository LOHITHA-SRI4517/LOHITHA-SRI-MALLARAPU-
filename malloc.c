						//Sum of 1D Array using malloc()
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*arr,i,sum=0;
	printf("ENTER THE VALUE OF N:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("MEMORY IS NOT ALLOCATED");
	}
		for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
		}
	printf("%d",sum);
	free(arr);
	return 0;
}
