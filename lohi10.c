#include<stdio.h>
int main()
{
	int r,C,i,j,a[100][100],b[100][100],c[100][100];
	printf("ENTER ROWS AND COLUMS:");
	scanf("%d %d",&r,&c);
	printf("ENTER B MATRIX ROWS AND COLUMNS:");
	scanf("%d %d",&r,&C);
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			scanf("%d",&b[i][j]);
		}
	}
	c[i][j]=a[i][j]+b[i][j];
	for(i=0;i<r;i++){
		for(j=0;j<C;j++){
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
}
