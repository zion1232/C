/* The high number in the array

void main()
{
	int arr[SIZE], i,max,min;
	printf("Please enter %d numbers : ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);
	max = arr[0];
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("The max is %d : ", max);

	}
	#####
	The small number in the array

	printf("Please enter %d numbers : ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);
	min = arr[0];
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	printf("The max is %d : ", min);
}
*/
