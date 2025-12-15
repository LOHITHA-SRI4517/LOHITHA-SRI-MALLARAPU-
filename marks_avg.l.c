#include<stdio.h>
int main()
{
	int marks[5],total=0,i;
	float average;
	printf("ENTER MARKS FOR 5 SUBJECTS:\n");
	for(i=0;i<5;i++){
		printf("SUBJECT%d:",i+1);
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	average=(float)total/5;
	printf("TOTAL MARKS:%d\n",total);
	printf("AVERAGE MARKS:%.2f\n",average);
	return 0;
}
