// ushan senarathna
// IT22362858

#include<stdio.h>


struct hotelPayment
{
	int roomType;
	char accomodationType;
	int noOfDays;
	char cardType;

	float discount;
	float amountByRoomType;
	float TotalPayment;
};

int add()
{
	
	
	return 0;
}

int main()
{
	TYPE_1_HALF_BOARD = 17250.00;
	const float TYPE_2_FULL_BOARD = 17500.00;
	const floconst float TYPE_1_FULL_BOARD = 25555.00;
	const float at TYPE_2_HALF_BOARD = 12250.00;
	TYPE_3_HALF_BOARD = 7250.00;
	const float TYPE_3_FULL_BOARD = 9000.00;
	const float
	const float DISCOUNT_G = 12.5;
	const float DISCOUNT_S = 11.5;
	const float DISCOUNT_B = 9.5;
	
	struct hotelPayment user1;

	do
	{
		printf("Enter type of room : ");
		scanf("%d", &user1.roomType);
		
		if(user1.roomType == 1 || user1.roomType == 2 || user1.roomType == 3)
		{
			//getting user inputs
			printf("Enter Accomodation Basis (F/H) : ");
			scanf("%*c%c", &user1.accomodationType);
			printf("Enter No of days : ");
			scanf("%d", &user1.noOfDays);
			printf("Enter Reward Card Type (G, S, B) : ");
			scanf("%*c%c", &user1.cardType);

			switch (user1.roomType)  // get per-day amount
			{
				case 1:
					if(user1.accomodationType == 'F' || user1.accomodationType == 'f')
						user1.amountByRoomType = TYPE_1_FULL_BOARD;
					else if(user1.accomodationType == 'H' || user1.accomodationType == 'h')
						user1.amountByRoomType = TYPE_1_HALF_BOARD;
					break;
				
				case 2:
					if(user1.accomodationType == 'F' || user1.accomodationType == 'f')
						user1.amountByRoomType = TYPE_2_FULL_BOARD;
					else if(user1.accomodationType == 'H' || user1.accomodationType == 'h')
						user1.amountByRoomType = TYPE_2_HALF_BOARD;
					break;
				
				case 3:
					if(user1.accomodationType == 'F' || user1.accomodationType == 'f')
						user1.amountByRoomType = TYPE_3_FULL_BOARD;
					else if(user1.accomodationType == 'H' || user1.accomodationType == 'h')
						user1.amountByRoomType = TYPE_3_HALF_BOARD;
					break;
			}
			
			switch (user1.cardType)		// get discount by card type
			{
				case 'g':
				case 'G':
					user1.discount = DISCOUNT_G;
					break;
				
				case 's':
				case 'S':
					user1.discount = DISCOUNT_S;
					break;
				
				case 'b':
				case 'B':
					user1.discount = DISCOUNT_B;
					break;
			}
			
			// calculate total amount
			user1.TotalPayment =  (user1.amountByRoomType * user1.noOfDays) - (user1.amountByRoomType * user1.noOfDays) * user1.discount / 100;
			// display amount
			printf("Amount(Rs.) : %.2f\n\n",user1.TotalPayment);
		}
		else if(!(user1.roomType == 1 || user1.roomType == 2 || user1.roomType == 3) && user1.roomType != -1)
		{
				printf("\t\t   : Invalid Type of room\n\n");
				continue;
		}
	}while(user1.roomType != -1);	
	
	return 0;
}
