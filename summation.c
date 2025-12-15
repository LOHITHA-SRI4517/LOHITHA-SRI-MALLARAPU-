#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("ENTER ANY VALUE OF N:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("SUM OF NUMBERS IS:%d",sum);
	return 0;
}
