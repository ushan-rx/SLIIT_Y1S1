#include <stdio.h>

int main()
{
	int ratings[3][4];
	float avg[3];
	int row, col, count;
	
	for(row = 0; row < 3; row++)
	{
		printf("Movie %d\n", row+1);
		for(col = 0; col < 4; col++)
		{
			printf("Enter rating %d: ", col+1);
			scanf("%d", &ratings[row][col]);
			
			if(ratings[row][col] < 1 || ratings[row][col] > 10)
			{
				printf("Invalid !!\n");
				col--;
			}			
		}
	}
	int total = 0;
	printf("Mov num\t avg rating\n");
	for(row = 0; row < 3; row++)
	{
		for(col = 0; col < 4; col++)
		{
			total = total + ratings[row][col];			
		}
		printf("%d\t %.2f\n", row + 1,total/4.0);
		avg[row] = total/4.0;
		total = 0;
	}
	int index;
	for(count = 0; count < 3; count ++)
	{
		if(avg[count] < avg[count + 1])
		{
			index = count + 1;
		}
	}
	
	printf("\nHighest : movie %d", index+1);
	
	
	
	return 0;
}
