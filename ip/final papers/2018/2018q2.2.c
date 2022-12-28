#include<stdio.h>

int main()
{
	char display[4][4];
	int row, col;
	
	printf("Enter the color (R/G/B)\n");
	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 4; col++)
		{
			printf("Enter the color for row%d column%d : ", row + 1, col + 1);
			scanf("%c%*c", &display[row][col]);
			if(display[row][col] != 'R' && display[row][col] != 'G' && display[row][col] != 'B')
			{
				printf("Invalid Input !!\n");
				col--;
			}
		}
	}
	printf("\n\tDisplay \n");
	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 4; col++)
		{
			printf("    %c", display[row][col]);
		}
		printf("\n");
	}
	
	printf("\nRed bulb positions : ");
	
	for(row = 0; row < 4; row++)
	{
		for(col = 0; col < 4; col++)
		{
			if(display[row][col] == 'R')
			{
				printf("[%d,%d] ", row, col);
			}
		}
	}
	
	return 0;
}
