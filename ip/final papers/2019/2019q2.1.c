#include<stdio.h>

int main()
{
	int fib[10];
	
	fib[0] = 0;
	fib[1] = 1;
	
	int count;
	for(count = 2; count < 10; count++)
	{
		fib[count] = fib[count -2] + fib[count - 1];		
	}
	
	printf("Fibonaci : ");
	for(count = 0; count < 10; count++)
	{
		printf("%d  ", fib[count]);		
	}
	return 0;
}



