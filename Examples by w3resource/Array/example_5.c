#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996) // scanf

#define begin_array 0

/*
5. Write a program in C to count a total number of duplicate elements in an array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/




void filling_array(int* array, const int size)
{
	int temporarity_value;
	for (int i = 0; i < size; i++)
	{
		printf("Element %d : ", i);
		scanf("%d", &temporarity_value);
		*(array + i) = temporarity_value;
	}
}

int getRepeat(const int* array, const int size)
{
	int answer = 0;

	int previous_element;
	for (int i = begin_array; i < size; i++)
	{
		if (i != begin_array)
		{
			if (previous_element == *(array + i))
			{
				answer++;
			}
		}
		if (i + 1 < size && i >= begin_array)
		{
			previous_element = *(array + i);
		}
	}
	return answer;
}



int main_5()
{
	int number_of_elements;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &number_of_elements);

	int* myArray = (int*)calloc(number_of_elements, sizeof(int));
	if (myArray == NULL)
	{
		printf("Error! Failure memory allocate.");
		exit(0);
	}

	printf("Input %d elements in the array :\n", number_of_elements);
	filling_array(myArray, number_of_elements);

	printf("Total number of duplicate elements found in the array is : %d", getRepeat(myArray, number_of_elements));

	free(myArray);
	myArray = NULL;

	return 0;
}