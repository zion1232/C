#include <stdio.h> 
#define _CRT_SECURE_NO_WARNINGS
/*switch*/
void main()
{
	int num_rooms, price, duplex;
	printf("enter the num of rooms (3 - 4 - 5)");
	scanf_s("%d", &num_rooms);
	switch (num_rooms)
	{
	case 3:
		price = 120;
		break;
	case 4:
		price = 150;
		break;
	case 5:
		printf("is duplex? ( 1 - yes/ 2 - no) :");
		scanf_s("%d", &duplex);
		if (duplex == 1) {
			price = 200;
		}
		else {
			price = 180;
			break;
		}

	}
	printf("please py me %d nis \n", price);
}


/*if and else*/
void main()
{
	int num_rooms, price, duplex;
	printf("enter the num of rooms (3 - 4 - 5)");
	scanf_s("%d", &num_rooms);
	if (num_rooms == 3)
	{
		price = 130;
	}
	else if (num_rooms == 4)
	{
		price = 150;
	}
	else 
	{
			printf("is duplex?");
			scanf_s("%d", &duplex);
			price = duplex ? 200 : 180; ///if thr part one is tru then 200 else 180
	}
	printf("please py me %d nis \n", price);
}
