#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma warning(disable : 4996)

#define size_of_array 3

/*
11. Write a program in C to swap elements using call by reference.
Test Data :
Input the value of 1st element : 5
Input the value of 2nd element : 6
Input the value of 3rd element : 7
Expected Output :

The value before swapping are :
element 1 = 5
element 2 = 6
element 3 = 7

The value after swapping are :
element 1 = 6
element 2 = 7
element 3 = 5
*/

void print(int* array, const int size)
{
	int index = 0;
	while (index < size)
	{
		printf("element %d = %d \n", index, *(array + index));
		index++;
	}
}


void swap_elements(int* array, const int size)
{
	bool zero_element = false;
	for (int i = 0; i < size; i++)
	{
		if (zero_element)
		{
			int temp_value = *(array + i - 1);
			*(array + i - 1) = *(array + i);
			*(array + i) = temp_value;
		}
		else
		{
			zero_element = true;
		}
	}
}


int main_11()
{
	const int size = size_of_array;
	int* array = calloc(size, sizeof(int));
	int element = 0;

	for (int i = 0; i < size; i++)
	{
		printf("Input the value of %d element : ", i);
		scanf("%d", &element);
		*(array + i) = element;
	}

	printf("The value before swapping are :\n");
	print(array, size);

	swap_elements(array, size);

	printf("The value after swapping are :\n");
	print(array, size);

	free(array);
	array = NULL;

	return 0;
}