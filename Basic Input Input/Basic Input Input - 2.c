void main()
{
	double kilometers,total;
	int bag;


	printf("Welcome to the taxi \n");
	printf("How far you have to travel in kilometers?\n");
	scanf_s("%lf", &kilometers);
	printf("How many bags do you have?\n");
	scanf_s("%d", &bag);
	total = bag * 2 + kilometers * 1.30 + 10.20 ;
	printf("For this trip you have to pay\n %.2lf",total);

/*An exercise for calculating a taxi ride*/

}
