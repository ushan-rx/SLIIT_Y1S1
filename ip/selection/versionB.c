// ushan senarathna
// IT22362858

#include <stdio.h>

struct hotelPayment
{
	int roomOPtion;
	int noOfGuests;
	int noOfDays;
	char option;
	int tourOption;
	
	float roomChargePerGuest;
	float additionalTour;
	float additionalTourTotal;	
	float totalPayment;
};

const float SUIT_2_PERSON = 45000.00;
const float SUIT_3_5_PERSON = 44000.00;
const float SUIT_MORE_THAN_5 = 43000.00;
	
const float SUPERIOR_2_PERSON = 40000.00;
const float SUPERIOR_3_5_PERSON = 38000.00;
const float SUPERIOR_MORE_THAN_5 = 35000.00;
	
const float DELUXE_2_PERSON = 37000.00;
const float DELUXE_3_5_PERSON = 35000.00;
const float DELUXE_MORE_THAN_5 = 32000.00;
	
const float SAFARI = 3500.00;
const float BIRD_WATCHING = 1000.00;
const float BOAT_RIDE = 1500.00;
const float CITY_TOUR = 2000.00;

int main()
{	
	struct hotelPayment user; 
		
	//user inputs	
	do 
	{
		printf("Input Room Option : "); // get room type
		scanf("%d", &user.roomOPtion);
		if(user.roomOPtion != 1 && user.roomOPtion !=2 && user.roomOPtion != 3)
		{
			printf("Invalid Input !\n");	
		}
	} while(user.roomOPtion <1 || user.roomOPtion >3);
	
	printf("Number of guests : ");
	scanf("%d", &user.noOfGuests); 
	printf("Number of Days : ");
	scanf("%d", &user.noOfDays);
	

	do{

		printf("Do you need any additional tours (y/n) : ");
		scanf(" %c", &user.option);
		
		if(user.option == 'y' || user.option == 'Y')  // when user input y for additional tours 
		{
			printf("Input your option : "); // get tour options from user
			scanf("%d", &user.tourOption);
			
					switch (user.tourOption) // get tour charges based on user's tourOption input 
		{
			case 1 :
				user.additionalTour = SAFARI;
				break;
			case 2 : 
				user.additionalTour = BIRD_WATCHING;
				break;
			case 3 : 
				user.additionalTour = BOAT_RIDE;
				break;
			case 4 : 
				user.additionalTour = CITY_TOUR;
				break;
			default : 
				if(user.tourOption != -9999)
				{
					printf("Invalid Input 2!\n");
					user.additionalTour = 0.0;	
				}			
		}
		}
		else if(user.option == 'n' || user.option == 'N')
		{
			break;	// when user input n for additional tours
		}
	
		else
		{
			printf("Invalid Input 1!\n");  // when user input invalid character instead of y or n
			continue;
		}
				


		user.additionalTourTotal =  user.additionalTourTotal + user.additionalTour; // get total additional tour charges


		
	} while(user.option != 'n' && user.option != 'N');
	
	switch (user.roomOPtion)  // get the charges per guest based on noOfGuests
	{
		case 1 : 
			user.roomChargePerGuest = (user.noOfGuests > 0 && user.noOfGuests <= 2) ? SUIT_2_PERSON
			: (user.noOfGuests > 2 && user.noOfGuests <= 5) ? SUIT_3_5_PERSON 
			: user.noOfGuests > 5 ? SUIT_MORE_THAN_5 : 0.00;
			break;
		case 2 :
			user.roomChargePerGuest = (user.noOfGuests > 0 && user.noOfGuests <= 2) ? SUPERIOR_2_PERSON
			: (user.noOfGuests > 2 && user.noOfGuests <= 5) ? SUPERIOR_3_5_PERSON 
			: user.noOfGuests > 5 ? SUPERIOR_MORE_THAN_5 : 0.00;
			break;
		case 3 :
			user.roomChargePerGuest = (user.noOfGuests > 0 && user.noOfGuests <= 2) ? DELUXE_2_PERSON
			: (user.noOfGuests > 2 && user.noOfGuests <= 5) ? DELUXE_3_5_PERSON 
			: user.noOfGuests > 5 ? DELUXE_MORE_THAN_5 : 0.00;
	}
	
	
	// calculate total price
	
	user.totalPayment = (user.roomChargePerGuest * user.noOfGuests * user.noOfDays) + user.additionalTourTotal * user.noOfGuests;
	
	// print total price
	
	printf("Total Price : %.2f", user.totalPayment);
	
	return 0;
}
