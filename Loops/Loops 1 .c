@@@Print a number from the end to the beginning@@@

	int num, temp, newnumber=0;
	printf("Enter number ");
	scanf_s("%d", &num);
	temp = num;
	while(temp!=0)
	{
		newnumber *= 10;
		newnumber += temp % 10;
		temp /= 10;
	}
	printf("the reversed of %d is %d\n", num, newnumber);


@@@Add a number to the end digit@@@

	int num,addnumber , newnumber = 0;
	printf("Enter number ");
	scanf_s("%d", &num);
	printf("Enter a digit you want to add to the end of the number ");
	scanf_s("%d", &addnumber);
	newnumber=num * 10 + addnumber;
	printf("Your number is %d. You have chosen to add the number %d. Your final number is %d\n", num, addnumber, newnumber);



{
	@@@only the even number@@@
	int num, temp, newnumber = 0,location=1;
	printf("Enter number ");
	scanf_s("%d", &num);
	temp = num;
	while (temp>0)
	{
		int digit = temp % 10;
		if (digit%2 == 0)
		{
			newnumber += digit*location;
			location *= 10;
		}
		temp /= 10;
	}
	printf("orgin number is %d . and only the even number are %d\n ",num,newnumber);

}

@@@only the negative  number@@@
	int num, temp, newnumber = 0, location = 1;
	printf("Enter number ");
	scanf_s("%d", &num);
	temp = num;
	while (temp>0)
	{
		int digit = temp % 10;
		if (digit % 2 == 1)
		{
			newnumber += digit*location;
			location *= 10;
		}
		temp /= 10;
	}
	printf("orgin number is %d . and only the odd   number are %d\n ", num, newnumber);

}

