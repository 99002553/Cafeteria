#include<stdio.h>
#include"cafe.h"
int Beverages();
int Starters();
int Milkshakes();
int Icecreams();
int Bill();

int main()
{
	int choice;
	printf("welcome to the hang out cafeteria");
	printf("\n-------------------------------\n");
	printf("\nMenu\n");
	do{
	printf("\n1.Beverages\n2.Starters\n3.Milkshakes\n4.Ice-creams\n5:Bill\n");
	printf("\nenter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:Beverages();
		break;
		case 2:Starters();
		break;
		case 3:Milkshakes();
		break;
		case 4:Icecreams();
		break;
		case 5:Bill();
		       exit(0);
		default:printf("invalid choice");
	}
	printf("\nFor more orders\n");

	}while(choice!=7);
	return 0;
	}
