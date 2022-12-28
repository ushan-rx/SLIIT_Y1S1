#include <stdio.h>
#include <assert.h>
#include <math.h>

float calDiscount (int time, float totAmount);

float calDiscount (int time, float totAmount)
{
	float discount;
	
	if(totAmount >= 5000 && (time >= 16 && time < 20))
	{
		discount = totAmount * 10 / 100;
	}
	else if(totAmount >= 5000 && (time >= 20 && time < 22))
	{
		discount = totAmount * 12 / 100;
	}
	else if(totAmount >= 2500 && (time >= 16 && time < 20))
	{
		discount = totAmount * 7 / 100;
	}
	else if(totAmount >= 2500 && (time >= 20 && time < 22))
	{
		discount = totAmount * 9 / 100;
	}
	else
	{
		discount = 0;
	}
	
	return discount;
}

void testCalDiscount()
{
	assert(abs(500.00 - calDiscount(19, 5000.00)) <= 0.001);
	assert(abs(225.00 - calDiscount(20, 2500.00)) <= 0.001);	
}

void displayGift(float finalTot)
{
	if(finalTot >= 7000)
	{
		printf("Packet of milk");
	}
	else if(finalTot > 4999)
	{
		printf("1 kg of Sugar");
	}
	else if(finalTot > 2999)
	{
		printf("Pack of 6 Eggs");
	}
}

int main()
{
	int time;
	float amount;
	testCalDiscount();
	do
	{
		printf("Enter the time :");
		scanf("%d", &time);
		if(time > 15 && time < 22)
		{
			break;
		}
		
		printf("Invalid Input !!\n");
	} while(1);
	printf("Enter the amount : ");
	scanf("%f", &amount);
	
	printf("\nFinal amount : %.2f\n", amount - calDiscount(time, amount));
	displayGift(amount - calDiscount(time, amount));
	
	return 0;
}
