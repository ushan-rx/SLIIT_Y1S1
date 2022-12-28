#include <stdio.h>

struct transaction
{
	int acc_num;
	char name[20];
	char t_type;
	float amount;	
};

int main()
{
	struct transaction transactions[5];
	int deposits[5] = {0};
	int withdraws[5] = {0};
	int count;
	float total_deposit = 0, total_withdrawal = 0;
	int max_dep, min_with, dep_index = 0, with_index = 0;
	
	for(count = 0; count < 5; count++)
	{
		printf("Enter acount number : ");
		scanf("%d", &transactions[count].acc_num);
		printf("Enter name : ");
		scanf("%s", &transactions[count].name);
		printf("Enter transaction type (w/d): ");
		scanf("%*c%c", &transactions[count].t_type);
		printf("Enter amount : ");
		scanf("%f", &transactions[count].amount);

	}

	for(count = 0; count < 5; count++)
	{
		switch (transactions[count].t_type)
		{
			case 'd':
				total_deposit = total_deposit + transactions[count].amount;
				deposits[dep_index] = count;
				dep_index++;
				break;
			case 'w':
				total_withdrawal = total_withdrawal + transactions[count].amount;
				withdraws[with_index] = count;
				with_index++;
				break;
		}
	
	}
	
	for(count = 0; count < dep_index-1; count++)
	{
		if(transactions[deposits[count]].amount < transactions[deposits[count+1]].amount)
		{
			max_dep = deposits[count+1];
		}
	}
	printf("sfs");
	
	for(count = 0; count < with_index-1; count++)
	{
		if(transactions[withdraws[count]].amount > transactions[withdraws[count+1]].amount)
		{
			min_with = withdraws[count+1];
		}
	}
	
	printf("Total deposit amount : %.2f\n", total_deposit);
	printf("Total withdrawal amount : %.2f\n", total_withdrawal);
	printf("Name of the max deposit : %s\n", transactions[max_dep].name);
	printf("Name of the min withdrawal : %s", transactions[min_with].name);
		
	return 0;
}
