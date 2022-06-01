#include <stdio.h>
#pragma warning(disable : 4996)// scanf

/*
3. Write a program in C to find the sum of all elements of the array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/

void get_sum_from_array(int* sum, const int* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		*sum += *(array + i);
	}
}

int main_3()
{
	printf("Input the number of elements to be stored in the array: ");
	int array_size;
	int sum = 0;
	scanf("%d", &array_size);
	int* array = calloc(array_size, sizeof(int));
	if (array == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	printf("Input %d elements in the array :\n", array_size);
	int temporarity_value;
	for (int i = 0; i < array_size; i++)
	{
		printf("element %d : ", i);
		scanf("%d", &temporarity_value);
		*(array + i) = temporarity_value;
		printf("\n");
	}

	get_sum_from_array(&sum, array, array_size);

	printf("Sum of all elements stored in the array is : %d\n", sum);

	free(array);
	array = NULL;
	return 0;
}