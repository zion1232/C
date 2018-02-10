binary number
{
	int num, loc = 1, binary = 0;
	printf("enter number");
	scanf_s("%d", &num);
	while (num>0)
	{
		int numleft = num % 2;
		num /= 2;
		binary += loc*numleft;
		loc *= 10;
	}
	printf("%d", binary);
}
