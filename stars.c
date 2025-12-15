#include<stdio.h>
int main()
{
	int i,j,n;	//i for rows, j for colums , n for enni number of lines 
	printf("ENTER NO OF LINES:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
	printf(" *");
	}
	printf("\n");
	}
}
