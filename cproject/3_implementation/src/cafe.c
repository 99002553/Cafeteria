#include<stdio.h>
#include<conio.h>
#include<cafe.h>
int Milk_price=10,Tea_price=15,Coffee_price=30,Cold_coffee_price=110,Hot_Chocolate_price=100,Green_tea_price=30;
int tea_cost=0,coffee_cost=0,hot_chocolate_cost=0,cold_coffee_cost=0,milk_cost=0,green_tea_cost=0;
int tea_quantity=0,coffee_quantity=0,hot_chocolate_quantity=0,cold_coffee_quantity=0,milk_quantity=0,green_tea_quantity=0;
int Masala_papad_price=40,Gobi_manchuri_price=120,Paneer_chilli_price=130,Baby_corn_price=130,paneermanchuri_price=145,Aloo365_price=135;
int masala_papad_cost=0,gobi_manchuri_cost=0,paneer_chilli_cost=0,baby_corn_cost=0,paneermanchuri_cost=0,aloo365_cost=0;
int masala_papad_quantity=0,gobi_manchuri_quantity=0,paneer_chilli_quantity=0,baby_corn_quantity=0,paneermanchuri_quantity=0,aloo365_quantity=0;
int chocolate_milkshake_price=100,vanilla_milkshake_price=90,strawberry_milkshake_price=105,kitkat_milkshake_price=140,bourbon_milkshake_price=100,nutella_milkshake_price=150;
int chocolate_milkshake_cost=0,vanilla_milkshake_cost=0,strawberry_milkshake_cost=0,kitkat_milkshake_cost=0,bourbon_milkshake_cost=0,nutella_milkshake_cost=0;
int chocolate_milkshake_quantity=0,vanilla_milkshake_quantity=0,strawberry_milkshake_quantity=0,kitkat_milkshake_quantity=0,bourbon_milkshake_quantity=0,nutella_milkshake_quantity=0;
int vanilla_cone_price=30,chocolate_cone_price=45,butterscotch_cone_price=50,pista_cone_price=60,blueberry_cone_price=60,blackcurrent_cone_price=55;
int vanilla_cone_cost=0,chocolate_cone_cost=0,butterscotch_cone_cost=0,pista_cone_cost=0,blueberry_cone_cost=0,blackcurrent_cone_cost=0;
int vanilla_cone_quantity=0,chocolate_cone_quantity=0,butterscotch_cone_quantity=0,pista_cone_quantity=0,blueberry_cone_quantity=0,blackcurrent_cone_quantity=0;
int Beverages()
{
	int Beverage_choice,Beverage_quantity=0;
	//static int Total_beverage_quantity=0;
	printf("\n1.Tea->Rs.15\n2.Coffee->Rs.30\n3.Hot chocolate->Rs.60\n4.cold coffee->Rs.110\n5.Milk->Rs.10\n6.Green tea->Rs.30\n");
	printf("\nenter your choice ");
	scanf("%d",&Beverage_choice);
	printf("\nenter how many ");
	scanf("%d",&Beverage_quantity);
	if(Beverage_choice==1)
	{
		tea_cost+=Beverage_quantity*Tea_price;
		tea_quantity+=Beverage_quantity;
	}
	else if(Beverage_choice==2)
	{
		coffee_cost+=Beverage_quantity*Coffee_price;
		coffee_quantity+=Beverage_quantity;
	}
	else if(Beverage_choice==3)
	{
		hot_chocolate_cost+=Beverage_quantity*Hot_Chocolate_price;
		hot_chocolate_quantity+=Beverage_quantity;
	}
	else if(Beverage_choice==4)
	{
		cold_coffee_cost+=Beverage_quantity*Cold_coffee_price;
		cold_coffee_quantity+=Beverage_quantity;
	}
	else if(Beverage_choice==5)
	{
		milk_cost+=Beverage_quantity*Milk_price;
		milk_quantity+=Beverage_quantity;
	}
	else
	{
		green_tea_cost+=Beverage_quantity*Green_tea_price;
		green_tea_quantity+=Beverage_quantity;
	}
	return 0;
}
int Starters()
{
	int Starter_choice,Starter_quantity;
	printf("\n1.Masala papad->Rs.40\n2.Gobi manchuri->Rs.120\n3.Panner chilli->Rs.130\n4.Baby corn->Rs.130\n5.Paneer manchuri->Rs.145\n6.Aloo 365->Rs.135\n");
	printf("\nenter your choice ");
	scanf("%d",&Starter_choice);
	printf("\nenter how many ");
	scanf("%d",&Starter_quantity);
	if(Starter_choice==1)
	{
		masala_papad_cost+=Starter_quantity*Masala_papad_price;
		masala_papad_quantity+=Starter_quantity;
	}
	else if(Starter_choice==2)
	{
		gobi_manchuri_cost+=Starter_quantity*Gobi_manchuri_price;
		gobi_manchuri_quantity+=Starter_quantity;
	}
	else if(Starter_choice==3)
	{
		paneer_chilli_cost+=Starter_quantity*Paneer_chilli_price;
		paneer_chilli_quantity+=Starter_quantity;
	}
	else if(Starter_choice==4)
	{
		baby_corn_cost+=Starter_quantity*Baby_corn_price;
		baby_corn_quantity+=Starter_quantity;
	}
	else if(Starter_choice==5)
	{
		paneermanchuri_cost+=Starter_quantity*paneermanchuri_price;
		paneermanchuri_quantity+=Starter_quantity;
	}
		else
	{
		aloo365_cost+=Starter_quantity*Aloo365_price;
		aloo365_quantity+=Starter_quantity;
	}

	return 0;
}
int Milkshakes()
{
	int Milkshake_choice,Milkshake_quantity;
	printf("\n1.chocolate milkshake->Rs.100\n2.vanilla milkshake->Rs.90\n3.Strawberry milkshake->Rs.105\n4.kitkat milkshake->Rs.140\n5.Bourbon milkshake=Rs.100\n6.Nutella milkshake=Rs.150\n");
	printf("\nenter your choice ");
	scanf("%d",&Milkshake_choice);
	printf("\nenter how many ");
	scanf("%d",&Milkshake_quantity);
	if(Milkshake_choice==1)
	{
		chocolate_milkshake_cost+=Milkshake_quantity*chocolate_milkshake_price;
		chocolate_milkshake_quantity+=Milkshake_quantity;
	}
	else if(Milkshake_choice==2)
	{
		vanilla_milkshake_cost+=Milkshake_quantity*vanilla_milkshake_price;
		vanilla_milkshake_quantity+=Milkshake_quantity;
	}
	else if(Milkshake_choice==3)
	{
		strawberry_milkshake_cost+=Milkshake_quantity*strawberry_milkshake_price;
		strawberry_milkshake_quantity+=Milkshake_quantity;
	}
	else if(Milkshake_choice==4)
	{
		kitkat_milkshake_cost+=Milkshake_quantity*kitkat_milkshake_price;
		kitkat_milkshake_quantity+=Milkshake_quantity;
	}
	else if(Milkshake_choice==5)
	{
		bourbon_milkshake_cost+=Milkshake_quantity*bourbon_milkshake_price;
		bourbon_milkshake_quantity+=Milkshake_quantity;
	}
	else
	{
		nutella_milkshake_cost+=Milkshake_quantity*nutella_milkshake_price;
		nutella_milkshake_quantity+=Milkshake_quantity;
	}
	return 0;
}
int Icecreams()
{
	int Ice_choice,Ice_quantity;
	printf("\n1.vanilla cone->Rs.30\n2.Chocolate cone->45\n3.Butterscoth cone->Rs.50\n4.pista cone->Rs.60\n5.Blurberry cone->Rs.60\n6.Blackcurrent cone=Rs.55\n");
	printf("\nenter your choice ");
	scanf("%d",&Ice_choice);
	printf("\nenter how many ");
	scanf("%d",&Ice_quantity);
	if(Ice_choice==1)
	{
		vanilla_cone_cost+=Ice_quantity*vanilla_cone_price;
		vanilla_cone_quantity+=Ice_quantity;
	}
	else if(Ice_choice==2)
	{
		chocolate_cone_cost+=Ice_quantity*chocolate_cone_price;
		chocolate_cone_quantity+=Ice_quantity;
	}
	else if(Ice_choice==3)
	{
		butterscotch_cone_cost+=Ice_quantity*butterscotch_cone_price;
		butterscotch_cone_quantity+=Ice_quantity;
	}
	else if(Ice_choice==4)
	{
		pista_cone_cost+=Ice_quantity*pista_cone_price;
		pista_cone_quantity+=Ice_quantity;
	}
	else if(Ice_choice==5)
	{
		blueberry_cone_cost+=Ice_quantity*blueberry_cone_price;
		blueberry_cone_quantity+=Ice_quantity;
	}
	else
	{
		blackcurrent_cone_cost+=Ice_quantity*blackcurrent_cone_price;
		blackcurrent_cone_quantity+=Ice_quantity;
	}
	return 0;
}
int Bill()
{
	int totalbill=0;
	if(tea_quantity>0)
	printf("\nnumber of tea ordered are %d and cost=%d",tea_quantity,tea_cost);
	if(coffee_quantity>0)
	printf("\nnumber of coffee ordered %d and cost=%d",coffee_quantity,coffee_cost);
	if(hot_chocolate_quantity>0)
	printf("\nnumber of hot_chocolate ordered %d and cost=%d",hot_chocolate_quantity,hot_chocolate_cost);
    if(cold_coffee_quantity>0)
	printf("\nnumber of cold_coffee ordered %d and cost=%d",cold_coffee_quantity,cold_coffee_cost);
	if(milk_quantity>0)
	printf("\nnumber of milk ordered %d and cost=%d",milk_quantity,milk_cost);
	if(green_tea_quantity>0)
	printf("\nnumber of green_tea ordered %d and cost=%d",green_tea_quantity,green_tea_cost);
	if(masala_papad_quantity>0)
	printf("\nnumber of Masala papad ordered are %d and cost=%d",masala_papad_quantity,masala_papad_cost);
	if(gobi_manchuri_quantity>0)
	printf("\nnumber of gobi_manchuri ordered %d and cost=%d",gobi_manchuri_quantity,gobi_manchuri_cost);
	if(paneer_chilli_quantity>0)
	printf("\nnumber of paneer_chilli ordered %d and cost=%d",paneer_chilli_quantity,paneer_chilli_cost);
	if(baby_corn_quantity>0)
	printf("\nnumber of baby corn ordered %d and cost=%d",baby_corn_quantity,baby_corn_cost);
	if(paneermanchuri_quantity>0)
	printf("\nnumber of paneermanchuri ordered %d and cost=%d",paneermanchuri_quantity,paneermanchuri_cost);
	if(aloo365_quantity>0)
	printf("\nnumber of aloo365 ordered %d and cost=%d",aloo365_quantity,aloo365_cost);
	if(chocolate_milkshake_quantity>0)
	printf("\nnumber of chocolate_milkshake ordered are %d and cost=%d",chocolate_milkshake_quantity,chocolate_milkshake_cost);
	if(vanilla_milkshake_quantity>0)
	printf("\nnumber of vanilla_milkshake ordered %d and cost=%d",vanilla_milkshake_quantity,vanilla_milkshake_cost);
	if(strawberry_milkshake_quantity>0)
	printf("\nnumber of strawberry_milkshake ordered %d and cost=%d",strawberry_milkshake_quantity,strawberry_milkshake_cost);
	if(kitkat_milkshake_quantity>0)
	printf("\nnumber of kitkat_milkshake ordered %d and cost=%d",kitkat_milkshake_quantity,kitkat_milkshake_cost);
	if(bourbon_milkshake_quantity>0)
	printf("\nnumber of bourbon_milkshake ordered %d and cost=%d",bourbon_milkshake_quantity,bourbon_milkshake_cost);
	if(nutella_milkshake_quantity>0)
	printf("\nnumber of nutellamilk shake ordered %d and cost=%d",nutella_milkshake_quantity,nutella_milkshake_cost);
	if(vanilla_cone_quantity>0)
	printf("\nnumber of vanilla_cone ordered are %d and cost=%d",vanilla_cone_quantity,vanilla_cone_cost);
	if(chocolate_cone_quantity>0)
	printf("\nnumber of chocolate cone ordered %d and cost=%d",chocolate_cone_quantity,chocolate_cone_cost);
	if(butterscotch_cone_quantity>0)
	printf("\nnumber of butterscotch_cone ordered %d and cost=%d",butterscotch_cone_quantity,butterscotch_cone_cost);
	if(pista_cone_quantity>0)
	printf("\nnumber of pista_cone ordered %d and cost=%d",pista_cone_quantity,pista_cone_cost);
	if(blueberry_cone_quantity>0)
	printf("\nnumber of blueberry cone ordered %d and cost=%d",blueberry_cone_quantity,blueberry_cone_cost);
	if(blackcurrent_cone_quantity>0)
	printf("\nnumber of blackcurrent cone ordered %d and cost=%d",blackcurrent_cone_quantity,blackcurrent_cone_cost);
	totalbill=tea_cost+coffee_cost+hot_chocolate_cost+cold_coffee_cost+milk_cost+green_tea_cost+masala_papad_cost+gobi_manchuri_cost+paneer_chilli_cost
	          +baby_corn_cost+paneermanchuri_cost+aloo365_cost+chocolate_milkshake_cost+vanilla_milkshake_cost+strawberry_milkshake_cost+kitkat_milkshake_cost
			  +bourbon_milkshake_cost+nutella_milkshake_cost+vanilla_cone_cost+chocolate_cone_cost+butterscotch_cone_cost+pista_cone_cost+blueberry_cone_cost+blackcurrent_cone_cost;
	printf("\ntotal bill is Rs.%d",totalbill);
	}
