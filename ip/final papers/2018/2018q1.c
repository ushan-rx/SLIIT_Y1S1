#include <stdio.h>

int main()
{
	const float H_fee = 1500.00;
	const float M_fee = 2000.00;
	const float F_fee = 2500.00;
	
	int reg = 0;
	char coz_type, option;
	int hospitality = 0, marketing = 0, finance = 0;
	
	do
	{
		printf("Enter course type : ");
		scanf("%c%*c", &coz_type);
		
		switch(coz_type)
		{
			case 'H':
			case 'h':
				hospitality += 1;
				break;
			case 'M':
			case 'm':
				marketing += 1;
				break;
			case 'F':
			case 'f':
				finance += 1;
				break;
			default :
				printf("Invalid input !!\n");
				continue;
		}
		printf("Continue Registration ??(Y/N) : ");
		scanf("%c%*c", &option);
		
		if(option == 'N' || option == 'n')
		{
			break;
		}
		
	}while(reg <= 100);	
	
	printf("\nNo of students ");
	printf("\nDiploma in Hospitality Management : %d", hospitality);
	printf("\nDiploma in Marketing              : %d", marketing);
	printf("\nDiploma in Finance                : %d\n", finance);
	printf("\nEarnings");
	printf("\nDiploma in Hospitality Management : %.2f", hospitality * H_fee);
	printf("\nDiploma in Marketing              : %.2f", marketing * M_fee);
	printf("\nDiploma in Finance                : %.2f", finance * F_fee);
	
	return 0;
}
