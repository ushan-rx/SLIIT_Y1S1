// ushan senarathna

#include <stdio.h>

int main()
{
	int numArr[6];
	int oddNum[6];
	int evenNum[6];
	
	//get user inputs
	int count =0;
	int oddIndex = 0, evenIndex = 0; // to hold the next index number of array
	
	for(count = 0; count < 6; count++)
	{
		printf("Enter number %d : ", count+1);
		scanf("%d", &numArr[count]);
		
		if(numArr[count] % 2 == 1)
		{
			oddNum[oddIndex] = numArr[count];
			oddIndex++;
		}
		else 
		{
			evenNum[evenIndex] = numArr[count];
			evenIndex++;	
		}
	}

	//print array
	printf("\nNumber series : ");
	
	for(count = 0; count < 6; count++)
	{
		printf("%d  ", numArr[count]);
		
	}
	//print odd mumbers
	printf("\nOdd numbers : ");
	
	for(count = 0; count < oddIndex; count++)
	{
		printf("%d  ", oddNum[count]);
		
	}
	//print even numbers
	printf("\nEven numbers : ");
	
	for(count = 0; count < evenIndex; count++)
	{
		printf("%d  ", evenNum[count]);
		
	}
	
	
	
	
	
	return 0;
}
