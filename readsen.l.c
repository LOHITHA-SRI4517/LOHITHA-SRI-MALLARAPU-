#include<stdio.h>
int main(){
	char sen[2000];
	printf("ENTER A SENTENCE:");
	//scanf("%s",sen);
	fgets(sen,2000,stdin);
	system("cls");
	printf("ENTERED SENTENCE IS:%s",sen);
}
