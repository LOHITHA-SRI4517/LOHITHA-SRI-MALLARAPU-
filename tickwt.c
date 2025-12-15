#include<stdio.h>
main()
{
	int choice,n,rate,TOTAL_AMOUNT;
	printf("1.KAKAINADA\n");
	printf("2.HYDERABAD\n");
	printf("3.KADAPA\n");
	printf("4.VIJAYAWADA\n");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	printf("ENTER NUMBER OF TICKETS:\n");
	scanf("%d",&n);
	printf("\nENTER THE COST OF TICKET:");
	scanf("%d",rate);
	switch (choice){
		case 1:
		printf("\nYOUR DESTINATION IS KKD.");
		printf("\nNO OF TICKETS IS %d",n);
		printf("\nCOST OF TICKET IS %d",rate);
		TOTAl_AMOUNT=n*rate;
		printf("\nTOTAL AMOUNT IS %d",n*rate);
		break;
		case 2:
		printf("\nYOUR DESTINATION IS HYD.");
		printf("\nNO OF TICKETS IS %d",n);
		printf("\nCOST OF TICKET IS %d",rate);
		TOTAL_AMOUNT=n*rate;
		printf("\nTOTAL AMOUNT IS %d",n*rate);
		break;
		case 3:
		printf("\nYOUR DESTINATION IS KDP.");
		printf("\nNO OF TICKETS IS %d",n);
		printf("\nCOST OF TICKET IS %d",rate);
		TOTAL_AMOUNT=n*rate;
		printf("\nTOTAL AMOUNT IS %d",n*rate);
		break;
		case 4:
		printf("\nYOUR DESTINATION IS BJA.");
		printf("\nNO OF TICKETS IS %d",n);
		printf("\nCOST OF TICKET IS %d",rate);
		TOTAL_AMOUNT=n*rate;
		printf("\nTOTAL AMOUNT IS %d",n*rate);
		break;
	}
}
