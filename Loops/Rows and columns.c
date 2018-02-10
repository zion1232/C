rowa and columsn
{
	int i, j, r ,c;
	printf("enter number of Rows  and columsn");
	scanf_s("%d%d", &r,&c);
	for (i=0;i<r;i++)
	{
		for (j = 0; j<c; j++)
			printf("*");
		printf("\n");

	}
}
