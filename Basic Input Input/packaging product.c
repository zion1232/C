#include <stdio.h> Using libraries
#define _CRT_SECURE_NO_WARNINGSCommand to use the SCAN command
#define PRICE_FOR_PAPER 5;
#define taxes 1.18;
#define EXTRA_SIZE 1.12;
void main()
{
	double Box_width,Box_depth, Box_height,Box_size;
	double price, total_price;
	
	printf("enter price");
	scanf_s("%lf", &price);
	printf("enter Box_width,Box_depth, Box_height");
	scanf_s("%lf%lf%lf", &Box_width, &Box_depth, &Box_height);

	Box_size =  (Box_width*Box_height + Box_width*Box_depth + Box_height*Box_depth) * 2 * EXTRA_SIZE; /*You have to double it twice because it's a box with 6 corners*/
	total_price = price + Box_size * PRICE_FOR_PAPER;
		printf("total_price %lf",total_price);


}

/*Calculate the price of a packaging product box and consider bottles including taxes*/
