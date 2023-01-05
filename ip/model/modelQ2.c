#include<stdio.h>

int main()
{
	int week, day;
	float usage[4][7] = {{1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0},{1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2},{2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6},{2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0}};
	float totUsage = 0, avgUsage, maxUsage = usage[0][0], minUsage = usage[0][0];
	int totDay = 0, maxDay = 1, minDay = 1;	
	for(week = 0; week < 4; week ++)
	{
		for(day = 0; day < 7; day++)
		{
			totDay += 1;
			totUsage = totUsage + usage[week][day];
			if(usage[week][day] > maxUsage)
			{
				maxUsage = usage[week][day];
				maxDay = totDay;
			}
			if(usage[week][day] < minUsage)
			{
				minUsage = usage[week][day];
				minDay = totDay;
			}
		}
	}
	printf("Day of the Month with maximum usage : %d Day\n", maxDay);
	printf("Maximum Usage in units : %.1f\n", maxUsage);
	printf("Day of the Month with minimum usage : %d Day\n", minDay);
	printf("Minimum Usage in units : %.1f\n", minUsage);
	printf("Average usage for the Month : %.1f\n", totUsage/28);
	printf("Total usage for the Month : %.1f", totUsage);
	return 0;
}
