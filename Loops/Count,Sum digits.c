
/*Count digits in a number*/
{
	int num, c = 0;
	printf("enter number");
	scanf_s("%d", &num);
	while (num != 0)
	{

		num = num / 10;
		c++;
	}
	printf("%d", c);
}

/*sum the digits*/

{
	int num, sum = 0, temp;
	printf("enter number");
	scanf_s("%d", &num);
	while (num>0)
	{
		temp = num % 10;
		sum = sum + temp;
		num = num / 10;
	}
	printf("%d", sum);
}
