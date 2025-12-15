#include<stdio.h>
int main()
{
	int a[100][100],r,c,i,j;
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
			printf("\t%d",a[i][j]);		
	}
	printf("\n");
}
return 0;
}
