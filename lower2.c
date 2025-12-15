#include<stdio.h>
int main()
{
	int a[100][100],n,i,j;
	printf("ENTER THE SIZE OF ARRAY:");
	scanf("%d",&n);																							 
	for(i=0;i<n;i++){ 
	for(j=0;j<n;j++){
			printf("\nENTER VALUE AT A a[%d][%d] POSITION:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int lower=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j>i&&a[i][j]==0||j<=i&&a[i][j]!=0) 
			{
				lower=1;  break;
			}
		}
		}
		if(lower==1){
			printf("\nIT IS A LOWER TRIANGULAR MATRIX.");
		}
		else {
		printf("\n THE GIVEN MATRIX IS NOT A LOWER TRIANGULAR MATRIX.");
	}
	return 0;
}
			
