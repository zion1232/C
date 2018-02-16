void main()
{
	int a,b,c,d,k;
	
	do
	{
		printf("enter 3 numbers");
		scanf_s(" %d%d%d", &a,&b,&c);
		d = a + b + c;
		printf("sum = %d , To continue press 1 to finish press negative number", d);
		scanf_s("%d", &k);

	} while (k>=0);


}
