#include<stdio.h>

int main()
{
char roomType, payMethod, userOption = 'y';
	int numOfRooms, numOfNights;
	float payPerNight, payment, totalPayment = 0;
	do
	{
		if(userOption == 'y' || userOption == 'Y')
		{
			payment = 0;
			printf("Enter room type : ");
			scanf(" %c",&roomType);
			if(roomType == 'd' || roomType == 'D')
			{
				payPerNight = 31000.00;
			}
			else if(roomType  == 's' || roomType == 'S')
			{
				payPerNight = 35000.00;
			}
			else if(roomType  == 'c' || roomType == 'C')
			{
				payPerNight = 50000.00;
			}
			else if(roomType  == 'e' || roomType == 'E')
			{
				payPerNight = 75000.00;
			}
			else if(roomType  == 'p' || roomType == 'P')
			{
				payPerNight = 100000.00;
			}
			else
			{
				printf("Invalid Room Type");
				break;
			}
			printf("Enter no of Rooms : ");
			scanf("%d", &numOfRooms);
			printf("Enter no of Nights : ");
			scanf("%d", &numOfNights);
			printf("Enter payment method :");
			scanf(" %c", &payMethod);
			
			payment = payPerNight * numOfRooms * numOfRooms;
			if(payMethod  == 'C' || payMethod == 'c')
			{
				payment = payment - (payment * 10 / 100);
			}
			totalPayment = totalPayment + payment;
			printf("Total Payment : %.2f\n", totalPayment);
			printf("Do you want to continue ? (Y/N)");
			scanf(" %c", &userOption);	
		}
		else 
		{
			break;
		}
	} while(userOption != 'N' && userOption!= 'n');
	return 0;
}
