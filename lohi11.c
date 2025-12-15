#include<stdio.h>
int main(){
	int i,j,r,c,a[100][100],b[100][100],C[100][100];
	printf("ENTER NUMBER OF ROWS AND COLUMNS:");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER a[%d][%d] POSITION ELEMENT:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENTER b[%d][%d] POSITION ELEMENT:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		C[i][j]=a[i][j]+b[i][j];
		printf("%d\t",C[i][j]);
	}
	printf("\n");
}
}
