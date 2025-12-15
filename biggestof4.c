#include<stdio.h>
int biggest(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,res;
	printf("ENTER VALUES OF A AND B AND C AND D:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	res=biggest(a,b,c,d);
	printf("BIGGEST OF 4 NUMBERS IS:%d",res);
	return 0;
}
int biggest(int a,int b,int c,int d){   //function declaration
	if(a>b&&a>c&&a>d)
	return a;
	else if(b>c&&b>d)
	return b;
	else if(c>d)
	return c;
	else 
	return d;
}
