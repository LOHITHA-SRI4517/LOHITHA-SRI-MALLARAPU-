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
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
	    		a[j+1]=temp;
			}
		}
	}
	printf("\nSORTED ARRAY IS: ");
		for(i=0;i<n;i++){
		printf("\t%d",a[i]);
	}
	return 0;
}
