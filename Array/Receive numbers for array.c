 Receive numbers for array
void main()
{
	int arr[SIZE], i;
	printf("Please enter %d numbers : ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);
	
	printf("The numbers are : ", SIZE);
	for (i = 0; i < SIZE; i++)
		printf("%d ,", arr[i]);
	printf("\n");

	printf("The numbers from the end to the beginning : ", SIZE);
	for (i = SIZE-1; i >=0 ; i--)
		printf("%d ,", arr[i]);
	printf("\n");
}
