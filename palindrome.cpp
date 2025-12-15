#include<stdio.h>
int main()
{
	int n,r=0,s=0,temp;
	printf("\nENTER N VAKUE:");
	scanf("%d",&n);
	temp=n;
	while (n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;		
	}
	if(temp==s)
	{
		printf("\nPALINDROME");
	}
	else
	{
		printf("\nNOT A PALINDROME");
	}
}
