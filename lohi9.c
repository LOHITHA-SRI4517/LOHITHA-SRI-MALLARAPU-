#include<stdio.h>
int main(){
	int i,r1,c1,r2,c2,j,k,a[100][100],b[100][100],c[100][100];
	printf("ENTER NUMBER OF  ROWS AND COLUMS OF MATRIX A:");
	scanf("%d %d",&r1,&c1);
	printf("ENTER NUMBER OF ROWS AND COLUMS OF MATRIX B:");
	scanf("%d %d",&r2,&c2);
	if(r2!=c1){
		printf("MULTIPLICATION IS NOT POSSIBLE");
		return 0;
	}
	for(i=0;i<r1;i++){
	for(j=0;j<c1;j++){
	printf("ENTER ELEMENT IN a[%d][%d] POSITION:",i,j);
	scanf("%d",&a[i][j]);
}
}
for(i=0;i<r2;i++){
	for(j=0;j<c2;j++){
		printf("ENTER ELEMENTS IN a[%d][%d] POSITION:",i,j);
		scanf("%d",&b[i][j]);
	}
}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			c[i][j]=0;
			for(k=0;k<c1;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r1;i++){
	for(j=0;j<c2;j++){
	printf("%d\t",c[i][j]);
}
	printf("\n");
}
}
