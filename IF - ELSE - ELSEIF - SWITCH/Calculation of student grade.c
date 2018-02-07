
{

	int attendance, examGrade, middleExam, hwGrade, tempGrade, finalGrade;
	printf("Enter the attendance");
	scanf_s("%d", &attendance);

	if (attendance < 80)
		finalGrade = 0;
	else

	{
		printf("Enter the examGrade");
		scanf_s("%d", &examGrade);

		if (examGrade < 60)
			finalGrade = examGrade;

		else
		{
			printf("Enter the middleExam");
			scanf_s("%d", &middleExam);
			tempGrade = 0.8*examGrade + 0.2*middleExam;
			if (tempGrade < examGrade)
				tempGrade = examGrade;

			printf("Enter the hwGrade");
			scanf_s("%d", &hwGrade);

			finalGrade = 0.1*hwGrade + 0.9*tempGrade;

		}
	}

		printf("the Grade %d ", finalGrade);

	
}
