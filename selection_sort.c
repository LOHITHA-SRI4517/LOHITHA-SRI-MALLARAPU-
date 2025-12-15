#include<stdio.h>
int main()
{
	int n,a[100],i,j,temp;
	printf("\nENTER ARRAY SIZE:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nENTER THE VALUE OF a[%d] POSITION:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nAFTER SORTING:");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
}
