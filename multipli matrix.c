#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],C[100][100],r,c,i,j,k;
	printf("ENTER THE SIZE OF ROWS AND COLUMNS:");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\nENTER VALUE AT A a[%d][%d] POSITION:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("\nENTER THE VALUES OF b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		c[i][j] += a[i][k]*b[k][j];
		printf("\t%d",C[i][j]);		
	}
	printf("\n");		
		}
	return 0;}
	
