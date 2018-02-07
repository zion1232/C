
void main()

{
	int Tasks, Grade, TotalGrade;
	double AVRg;
	printf("enter Grade ");
	scanf_s("%d", &Grade);
	printf("enter Tasks ");
	scanf_s("%d", &Tasks);
	printf("enter AVRg ");
	scanf_s("%lf", &AVRg);
	if (Tasks <= 4)
	{
		TotalGrade = Grade;
	}

	else if (Tasks > 4 && Tasks < 8)
	{
		if (Grade >= 60)
			TotalGrade = (int)(0.8*Grade + 0.2*AVRg);
		else
			TotalGrade = (int)(0.9*Grade + 0.1*AVRg);
	}
	else
	{
		if (Grade >= 60)		
			TotalGrade = (int)(0.7*Grade + 0.3*AVRg);
		else
			TotalGrade = (int)(0.6*Grade + 0.4*AVRg);
		}
	
printf("the Grade %d ", TotalGrade);
system("pause");
