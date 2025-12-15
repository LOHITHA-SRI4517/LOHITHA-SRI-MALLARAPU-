#include<stdio.h>
#include<math.h>
int main(){
	float b,l,r,pi,area,a1;
	pi=3.14;
	printf("\nENTER RADIUS:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\nAREA OF CIRCLE IS:%.2f",area);
	printf("\nENTER LENGTH AND BREADTH:");
	scanf("%f %f",&l,&b);
	a1=l*b;
	printf("AREA OF RECTANGLE=%.2f",a1);
}
