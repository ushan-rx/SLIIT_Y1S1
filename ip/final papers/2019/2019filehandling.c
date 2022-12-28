#include<stdio.h>

int findNum(long long int num);

int main()
{
	int count;
	long long int lnumber;
	char name[20];
	FILE *cfprt;
	
	cfprt = fopen("L.dat", "w");
	if(cfprt == NULL)
	{
		printf("Can not access file(1)\n");
		return -1;
	}
	fprintf(cfprt, "7728369210  Dinesh\n7773457219  Subash\n");
	fclose(cfprt);
	for(count = 1; count <=5; count++)
	{
		printf("Enter Loyalty number : ");
		scanf("%lld", &lnumber);
		if(findNum(lnumber) == -1)
		{
			printf("Can not access file(2)\n");
			return -1;
		}
		else if(findNum(lnumber) == 0)
		{
			printf("Enter name : ");
			scanf("%s", &name);
			
			cfprt = fopen("L.dat", "a");
			if(cfprt == NULL)
			{
				printf("Can not access file(3)\n");
				return -1;
			}
			fprintf(cfprt, "%lld  %s\n", lnumber, name);
			fclose(cfprt);
		}
	}	
	return 0;
}

int findNum(long long int num)
{
	long long int lnum;
	char name[20];
	FILE *fpointer;
	
	fpointer = fopen("L.dat", "r");
	if(fpointer)
	{
		fscanf(fpointer, "%lld  %s", &lnum, &name);
		while(!feof(fpointer))
		{
			if(lnum == num)
			{
				fclose(fpointer);
				return 1;
			}
			fscanf(fpointer, "%lld  %s", &lnum, &name);
		}
		fclose(fpointer);
		return 0;
	}
	else
	{
		fclose(fpointer);
		return -1;
	}
}
