// ushan senarathna

#include <stdio.h>

int main()
{
	int num[8]; // declare array
	 
	int count;
	// get user inputs
	
	
	for(count = 0; count <8; count++)
	{
		printf("Enter number %d : ", count+1);
		scanf("%d", &num[count]);
		if(num[count] <1 || num[count] >4)  // handle invalid inputs
		{
			printf("Invalid input !! (Enter between 1-4)\n");
			count--;
		}
	}
	
	//print array
	printf("\nnum array : ");
	for(count = 0; count <8; count++)
	{
		printf("%d  ", num[count]);
	
	}
	
	//find 1 3 pattern
	
	int pattern = 0;
	for(count = 0; count <8; count++)
	{
		if(num[count] == 1 && num[count+1] == 3)
		{
			pattern++;
		}
	
	}
	
	printf("\nNumber of times the patern \"1 3\" appear : %d", pattern);
	
	return 0;
}
