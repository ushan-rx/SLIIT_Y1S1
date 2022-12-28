// ushan senarathna

#include <stdio.h>

int main()
{
	int myArray[10];
	int largeNum[10];
	int count;
	int largeIndex = 0;
	float total = 0;
	
	printf("Enter the number series : "); 
	// get number series from user
	for(count = 0; count < 10; count++)
	{
		scanf("%d", &myArray[count]);
		total = total + myArray[count];  // calculate total
	}
	
	printf("Average : %.1f\n", total/10); // print average
	
	printf("\nmyArray : ");
	
	for(count = 0; count < 10; count++)
	{
		printf("%d  ", myArray[count]);  // print myArray
		
		// input values to largeNum
		if(myArray[count] > total/10)
		{
			largeNum[largeIndex] = myArray[count];
			largeIndex++;
		}
	}
	
	//print largeNum
	printf("\nlargeNum : ");
	for(count = 0; count < largeIndex; count++)
	{
		printf("%d  ", largeNum[count]);
	}
	
	
	return 0;
}
