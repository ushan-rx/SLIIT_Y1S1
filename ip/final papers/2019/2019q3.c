#include <stdio.h>
#include <assert.h>
#include <math.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();


float calcAnnualInterest(float interestRate, float amount)
{
	float interest = amount * interestRate /100;
	if(amount > 1000000.00)
		interest = amount * (interestRate + 0.5) / 100;
		
	return interest;
}

float findTotalAmount(float interestRate, float amount)
{
	return amount + calcAnnualInterest(interestRate, amount);
}

void testTotalAmount()
{
	assert(abs(120000.00 - findTotalAmount(20.00, 100000.00)) <= 0.001);
	assert(abs(12050000.00 - findTotalAmount(20.00, 10000000.00)) <= 0.001);
}


int main()
{
	int count;
	float amount, interestRate, total_amount;
	testTotalAmount();
	printf("Enter the amount to be invested : ");
	scanf("%f", &amount);
	printf("Enter the annual interest rate : ");
	scanf("%f",&interestRate);
	
	for(count = 1; count <= 5; count++)
	{
		total_amount = findTotalAmount(interestRate, amount);
		printf("Amount after year %d : %.2f\n", count, total_amount);
		amount = total_amount;
	}
	return 0;
}
