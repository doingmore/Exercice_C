#include <stdio.h>
#pragma warning(disable : 4996)// scanf

#define bigin 0

/*
2. Write a program in C to read n number of values in an array and display it in reverse order. Go to the editor
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

void print(const int* ptr, const int size)
{
	printf("The values store into the array are : ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	printf("The values store into the array in reverse are : ");
	for (int i = size - 1; i >= bigin; i--)
	{
		printf("%d ", *(ptr + i));
	}
}

int main_2()
{
	printf("Enter number of elements in array: ");
	int array_size;
	scanf("%d", &array_size);
	int* array = calloc(array_size, sizeof(int));
	if (array == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	printf("You entered %d elements.\n", array_size);
	int temporarity_value;
	for (int i = 0; i < array_size; i++)
	{
		printf("Now enter the element %d : ", i);
		scanf("%d", &temporarity_value);
		*(array + i) = temporarity_value;
		printf("\n");
	}

	print(array, array_size);


	free(array);
	array = NULL;
	return 0;
}