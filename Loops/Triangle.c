
base of triangle rtl
	int i, j, base;
	printf("enter base");
	scanf_s("%d", &base);
	for (i = 1; i <= base; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");

	}
}

{
base of triangle ltr

	int i, j, base;
	printf("enter base");
	scanf_s("%d", &base);
	for (i = 1; i <= base; i++)
	{
		for (j = 1; j <= base-i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");

	}
}
