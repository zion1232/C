
#include <stdio.h> /*Using libraries*/
#define _CRT_SECURE_NO_WARNINGS/*Command to use the SCAN command*/
#define PRICE_FOR_TICKET 35;/*constant variable*/
void main()
{
	int numberofti, pay;
	printf("how mach tickets you buy");
	scanf_s("%d", &numberofti);
	pay = numberofti * PRICE_FOR_TICKET;
	printf("You need to pay %d NIS",pay);


}

/*Ask the user how many tickets he wants to buy, multiply the fixed variable and tell him how much he has to pay*/
