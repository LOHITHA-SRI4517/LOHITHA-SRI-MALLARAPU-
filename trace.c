#include<stdio.h>
int main()
{
	int a[100][100],n,sum,i,j;
	printf("ENTER THE SIZE OF ARRAY:");
	scanf("%d",&n);
	for(i=0;i<n;i++){	
	for(j=0;j<n;j++){
			printf("\nENTER VALUE AT A a[%d][%d] POSITION:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<n;i++){
	   sum+=a[i][i];
}
	printf("\nSUM IS:%d",sum);
	return 0;
}
			
			
