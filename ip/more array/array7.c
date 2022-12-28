#include <stdio.h>


int main()
{
	int seat[10];
	int count;
	int input;
	for(count = 0; count < 10; count++)
		seat[count] = 0;
	
	do
	{
		printf("pls input the seat number (1-10) : ");
		scanf("%d", &input);
		
		if(input > 0 && input < 11)
		{
			if(seat[input - 1] == 1)
			{
				printf("Sorry.. The seat %d is reserved\n", input);
			}
			else
			{
				seat[input - 1] = 1;	
			}
		}
		else if(input != -1)
		{
			printf("Invalid Input !!\n");
		}
		
	} while(input != -1);
	
	
	printf("\nReserved seats : ");
	for(count = 0; count < 10; count++)
	{
		if(seat[count] == 1)
		{
			printf("S%d ", count+1);
		}
	}
	
	return 0;
}