// ushan senarathna

#include <stdio.h>

int main()
{
	int intArr[10];
	int positiveNum[10];
	int negativeNum[10];
	
	//get user inputs
	int count =0;
	int positiveIndex = 0, negativeIndex = 0; // to hold the next index number of array
	
	// input values to positive and negative arrays
	for(count = 0; count < 10; count++)
	{
		printf("Enter number %d : ", count+1);
		scanf("%d", &intArr[count]);
		
		if(intArr[count] < 0)
		{
			negativeNum[negativeIndex] = intArr[count];
			negativeIndex++;
		}
		else if(intArr[count] > 0)
		{
			positiveNum[positiveIndex] = intArr[count];
			positiveIndex++;	
		}
	}

	//print array
	printf("\nNumber series : ");
	
	for(count = 0; count < 10; count++)
	{
		printf("%d  ", intArr[count]);
		
	}
	//print odd mumbers
	printf("\nPositive numbers : ");
	
	for(count = 0; count < positiveIndex; count++)
	{
		printf("%d  ", positiveNum[count]);
		
	}
	//print even numbers
	printf("\nNegative numbers : ");
	
	for(count = 0; count < negativeIndex; count++)
	{
		printf("%d  ", negativeNum[count]);
		
	}
	
	
	
	
	
	return 0;
}