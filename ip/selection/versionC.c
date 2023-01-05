// ushan senarathna 
// IT22362858

#include <stdio.h>


struct pizzaPrice
{
	int pizzaOption;
	char size;
	int noOfPizzas;
	char option;
	int toppingOption;
	
	float chargeOfOnePizza;
	float toppingCharge;
	float totalToppingCharge;
	float totalPrice;
};
int main()
{
	const float ITALIANO_P = 560.00;
	const float ITALIANO_M = 920.00;
	const float ITALIANO_L = 1800.00;
	
	const float CHEESY_ONION_P = 340.0;
	const float CHEESY_ONION_M = 660.00;
	const float CHEESY_ONION_L = 1300.00;
	
	const float HOT_GARLIC_P = 760.00;
	const float HOT_GARLIC_M = 1100.00;
	const float HOT_GARLIC_L = 2100.00;
	
	const float CHEESE = 320.00;
	const float OLIVES = 140.00;
	const float BELL_PEPPER = 130.00;
	const float PINEAPPLE = 150.00;
	
	struct pizzaPrice user;
	
	// user inputs
	do
	{
		printf("Input Pizza Option : ");  // getting pizza option
		scanf("%d", &user.pizzaOption);	
		
		if(user.pizzaOption<1 || user.pizzaOption >3)  // handling invalid input
			printf("Invalid Input !\n");
	} while(user.pizzaOption<1 || user.pizzaOption >3);
	
	printf("Size of Pizza (P/M/L) : ");
	scanf("%*c%c", &user.size);
	printf("Number of Pizzas : ");
	scanf("%d", &user.noOfPizzas);
	
	user.option = '#';  // setting default value for user option
	do
	{
		user.toppingOption = -9999;  // setting default value for topping option
		user.toppingCharge = 0.0;	// setting default value for charge of topping
		if(user.option == 'y' || user.option == 'Y') // when user input y for option
		{
			printf("Input your option : ");
			scanf("%d", &user.toppingOption);
			
			switch (user.toppingOption) // getting topping charge
			{
				case 1 : 
					user.toppingCharge = CHEESE;
					break;
				case 2 : 
					user.toppingCharge = OLIVES;
					break;
				case 3 : 
					user.toppingCharge = BELL_PEPPER;
					break;
				case 4 : 
					user.toppingCharge = PINEAPPLE;
					break;
				default :
					if(user.toppingOption !=-9999)
					{
						printf("Invalid Input x!\n");
						user.toppingCharge = 0.0;
					}
			}
		}
		else if(user.option == '#')  // handle default value for user option
		{
		}
		else if(user.option == 'n' || user.option == 'N') // when user input n as option
		{
			break;
		}
		else
		{
			printf("Invalid Input y!\n");  // handle invalid input for user option
			user.option = '#';
			continue;
		}
		
		user.totalToppingCharge = user.totalToppingCharge + user.toppingCharge;  // calculate total toppings charge per pizza
		
		printf("Do you need any extra toppings (y/n) : ");
		scanf("%*c%c", &user.option);
	} while(user.option != 'n' || user.option != 'N');
	
	switch (user.pizzaOption)  // get charge pr pizza based on user input
	{
		case 1 :
			user.chargeOfOnePizza = (user.size == 'p' || user.size == 'P') ? ITALIANO_P 
			: (user.size == 'm' || user.size == 'M') ? ITALIANO_M
			: (user.size == 'l' || user.size == 'L') ? ITALIANO_L : 0.0;
			break;
		case 2 :
			user.chargeOfOnePizza = (user.size == 'p' || user.size == 'P') ? CHEESY_ONION_P 
			: (user.size == 'm' || user.size == 'M') ? CHEESY_ONION_M
			: (user.size == 'l' || user.size == 'L') ? CHEESY_ONION_L : 0.0;
			break;
		case 3 :
			user.chargeOfOnePizza = (user.size == 'p' || user.size == 'P') ? HOT_GARLIC_P 
			: (user.size == 'm' || user.size == 'M') ? HOT_GARLIC_M
			: (user.size == 'l' || user.size == 'L') ? HOT_GARLIC_L : 0.0;
			break;

	}
	// calculate total price
	user.totalPrice = (user.chargeOfOnePizza * user.noOfPizzas) + (user.totalToppingCharge * user.noOfPizzas);
	// display total price
	printf("Total Price Rs : %.2f", user.totalPrice);

	return 0;
}
