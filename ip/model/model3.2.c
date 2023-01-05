#include<stdio.h>

int main()
{
	char num[10];
	float local, international, roaming, total;
	FILE *filePointr;
	filePointr = fopen("charges.dat", "r");
	if(filePointr == NULL)
	{
		printf("Can not access file !!");
		return -1;
	}
	
	fscanf(filePointr, "%s\t%f\t%f\t%f", &num, &local, &international, &roaming);
	while(!feof(filePointr))
	{
		total = local + international + roaming;
		printf("%s Total due amount : %.2f\n", num, total);
		
		fscanf(filePointr, "%s\t%f\t%f\t%f", &num, &local, &international, &roaming);
	}
	
	fclose(filePointr);
	
	return 0;
}
