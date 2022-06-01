#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996) // scanf

/*
4. Write a program in C to copy the elements of one array into another array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/


void print(const int* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(array + i));
	}
}

void copy(const int* left, int* right, const int size)
{
	for (int i = 0; i < size; i++)
	{
		*(right + i) = *(left + i);
	}
}


int main_4()
{
	int array_size;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &array_size);

	int* myArray = (int*)calloc(array_size, sizeof(int));
	if (myArray == NULL)
	{
		printf("Error! First memory allocated failed!");
		exit(0);
	}

	printf("Input %d elements in the array : \n", array_size);
	int temporarity_value;
	for (int i = 0; i < array_size; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &temporarity_value);
		*(myArray + i) = temporarity_value;
	}

	int* copyArray = (int*)calloc(array_size, sizeof(int));
	if (copyArray == NULL)
	{
		printf("Error! Second memory allocated failed!");
		exit(0);
	}

	copy(myArray, copyArray, array_size);

	printf("\n");
	printf("The elements stored in the first array are : ");
	print(myArray, array_size);
	printf("\n");
	printf("The elements stored in the second copy array are : ");
	print(copyArray, array_size);


	free(myArray);
	myArray = NULL;
	free(copyArray);
	copyArray = NULL;


	return 0;
}