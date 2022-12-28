// ushan senarathna 


#include <stdio.h>
#include <stdbool.h>  // to use bool we must include this

int main()
{
	int arrNum[6];
	int count;
	bool ascend = true;
	
	printf("Enter values to the Array : \n");
	
	for(count = 0; count < 6; count++)
	{
		scanf("%d", &arrNum[count]);
	}
	
	for(count = 0; count < 6; count++)
	{
		printf("%d  ", arrNum[count]);
		
		if(arrNum[count] > arrNum[count + 1])  // check for ascending order
		{
			ascend = false;	
		}
	}
	
	ascend ? printf("\nNumbers are stored in ascending order") : printf("\nNumbers are not stored in ascending order");
	
	return 0;
}