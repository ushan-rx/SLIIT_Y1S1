#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

float calculateIncrement(int grade, float basicSalary)
{
	float increment;
	if(grade == 1)
	{
		increment = basicSalary * 10 / 100;
	}
	else if(grade == 2)
	{
		increment = basicSalary * 15 / 100;
	}
	else if(grade == 3)
	{
		increment = basicSalary * 20 / 100;
	}
	return increment;
}

float calcTotSalary(float salary, float increment)
{
	return salary + increment;
}

int main()
{
	float salary;
	int grade;
	printf("Enter Salary : ");
	scanf("%f", &salary);
	printf("Enter grade : ");
	scanf("%d", &grade);
	printf("Increment : %.2f\n", calculateIncrement(grade, salary));
	printf("Total Salary : %.2f", calcTotSalary(salary, calculateIncrement(grade, salary)));
	return 0;
}
