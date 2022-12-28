#include <stdio.h>


int main()
{
	int rate[5];
	int count;
	int input;
	
	for(count = 0; count <5; count++)
		rate[count] = 0;

	do
	{
		printf("pls input the service rating (1-5) :");
		scanf("%d", &input);

		if(input > 0 && input < 6)
		{
			switch (input)
			{
				case 1:
					rate[0] += 1;
					break;
				case 2:
					rate[1] += 1;
					break;
				case 3:
					rate[2] += 1;
					break;
				case 4:
					rate[3] += 1;
					break;
				case 5:
					rate[4] += 1;
					break;
			}
		}
		else if(input != -1)
		{
			printf("Invalid input !!\n");
		}
		
	} while(input != -1);
	
	printf("\nRating\t\t Number of response\n");
	
	for(count = 0; count <5; count++)
	{
		printf("%d     \t\t %d\n", count+1, rate[count]);
	}
	
	
	return 0; 
}