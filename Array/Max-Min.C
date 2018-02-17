/* The high number in the array*/
#define SIZE 5
void main()
{
	int arr[SIZE], i,max;
	printf("Please enter %d numbers : ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);
	max = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > arr[max])
			max = i;
	}
	printf("The max is at index %d  and its value is %d: ", max,arr[max]);

	}
	
	
	/*The small number in the array*/

void main()
{
	int arr[SIZE], i,max;
	printf("Please enter %d numbers : ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);
	max = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] < arr[max])
			max = i;
	}
	printf("The min is at index %d  and its value is %d: ", max,arr[max]);

	}
*/
