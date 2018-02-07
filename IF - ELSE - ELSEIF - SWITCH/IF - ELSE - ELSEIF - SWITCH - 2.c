#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGSC
void main()

{

	int Sum, Products, Dis1, Dis2;
	printf("Enter the sum of the products");
	scanf_s("%d", &Sum);
	printf("Enter the products");
	scanf_s("%d", &Products);
	Dis1 = Sum - (Sum / 300) * 50;
	if (Products >= 3)
		Dis2 = 0.8*Sum;
	else
	{
		Dis2 = Sum;
	}
	if (Dis1 < Dis2)
		printf("please pay %dNIS after dicount 1\n", Dis1);
	else
	{
		printf("please pay %dNIS after dicount 2\n", Dis2);

	}
}
/*Check out which discount is better*/
