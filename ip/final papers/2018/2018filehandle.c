#include <stdio.h>

struct Employee
{
	int num;
	char name[10];
	int attendance;
};

int main()
{
	struct Employee employee;
	int count;
	FILE *cfptr;
	cfptr = fopen("attendance.dat", "w");
	if(cfptr == NULL)
	{
		printf("FIle cant open !!");
		return -1;
	}
	for(count = 0; count < 2; count++)
	{
		printf("Enter Employee number : ");
		scanf("%d", &employee.num);
		printf("Enter name : ");
		scanf("%s", &employee.name);
		fprintf(cfptr, "%d\t%s\t", employee.num, employee.name);
		printf("Enter Attendance\n");
		int day;
		for(day = 1; day <= 7; day++)
		{
			printf("Day %d : ", day);
			scanf("%d", &employee.attendance);
			fprintf(cfptr, "%d ", employee.attendance);
		}	
		fprintf(cfptr, "\n");
	}
	fclose(cfptr);
	return 0;
}
