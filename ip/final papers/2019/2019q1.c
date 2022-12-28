#include<stdio.h>
#include<stdbool.h>


int main()
{
	const float classic_L = 1720.00;
	const float classic_M = 975.00;
	const float signature_L = 1820.00;
	const float signature_M =  1000.00;
	const int credit_dis = 20;
	const int loayalty_dis = 15;
	const int online_dis = 5;
	
	int type, num, discount;
	char size, option;
	float cost_per_one, cost = 0, discount_amount;
	bool credit, loyalty, online;
	do
	{
		printf("Enter pizza type : ");
		scanf("%d", &type);
		
		if(type == 1 || type == 2)
		{
			do
			{
				printf("Enter the size : ");
				scanf(" %c", &size);
				
				if(size == 'L' || size == 'M' || size == 'l' || size == 'm')
				{
					switch(size)
					{
						case 'L':
						case 'l':
							if(type == 1)
							cost_per_one = classic_L;
							else cost_per_one = signature_L;
							break;
						case 'M':
						case 'm':
							if(type == 1)
							cost_per_one = classic_M;
							else cost_per_one = signature_M;
							break;
					}
					printf("No of pizzas : ");
					scanf("%d", &num);
					printf("\n");
					break;
				}
				else
				{
					printf("Invalid input !!\n");
				}	
			}while(1);
		}
		else if(type != -1)
		{
			printf("Invalid input !!\n");
		}
		
		cost = cost + cost_per_one * num;
		cost_per_one = 0;
		num = 0;
		
	}while(type != -1);
	
	printf("\nAre you paying by credit card (Y/N) ? ");
	scanf(" %c", &option);
	option == 'Y' ? credit = true :
	option == 'N' ? credit = false : printf("Invalid Input !!\n");
	
	printf("Are you a loyalty customer (Y/N)? ");
	scanf(" %c", &option);
	option == 'Y' ? loyalty = true :
	option == 'N'? loyalty = false : printf("Invalid Input !!\n");
	
	printf("Is this an online order (Y/N)? ");
	scanf(" %c", &option);
	option == 'Y' ? online = true :
	option == 'N' ? online = false : printf("Invalid Input !!\n");	
	
	credit == true ? discount = credit_dis :
	loyalty == true? discount = loayalty_dis :
	online == true ? discount = online_dis : printf("\n");
	
	discount_amount = cost * discount / 100;
	
	printf("\nTotal bill amount : %.2f", cost);
	printf("\nDisount : %.2f", discount_amount);
	printf("\nNet amount : %.2f", cost - discount_amount);
	
	return 0;
}
