#include<stdio.h>

int main()
{
	char num[10];
	float local, international, roaming;
	FILE *FilePointer;
	
	FilePointer = fopen("charges.dat", "w");
	if(FilePointer == NULL)
	{
		printf("Cannot Access File!!");
		return -1;
	}
	int count;
	for(count = 1; count <= 5; count++)
	{
		printf("Enter Phone number : ");
		scanf("%s", &num);
		printf("Enter local call charges : ");
		scanf("%f", &local);
		printf("Enter international call charges : ");
		scanf("%f", &international);
		printf("Enter roaming call charges : ");
		scanf("%f", &roaming);
		fprintf(FilePointer, "%s\t%.2f\t%.2f\t%.2f\n", num, local, international, roaming);
	}
	fclose(FilePointer);
	return 0;
}
