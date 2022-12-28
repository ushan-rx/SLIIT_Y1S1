#include <stdio.h>

int main()
{
	int inputNum;
	int num;
	char name[20];
	int attendance, totAttendance = 0;
	int count;
	
	FILE *cfptr;
	cfptr = fopen("attendance.dat", "r");
	if(cfptr == NULL)
	{
		printf("Can not access file !!");
		return 0;
	}
	
	printf("Enter Employee number : ");
	scanf("%d", &inputNum);
	
	fscanf(cfptr, "%d%s", &num, &name);
	while(!feof(cfptr))
	{
		for(count = 0; count < 7; count++)
		{
			fscanf(cfptr, "%d", &attendance);
			if(attendance == 1)
				totAttendance += 1;
		}
		if(inputNum == num)
			printf("Attendance : %d", totAttendance);
		totAttendance = 0;
		fscanf(cfptr, "%d %s", &num, &name);
			
	}
	
	fclose(cfptr);
	
	return 0;
}
