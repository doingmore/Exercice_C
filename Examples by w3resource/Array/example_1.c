#include <stdio.h>
#pragma warning(disable : 4996)// scanf
#define array_size 10


/*
1. Write a program in C to store elements in an array and print it. Go to the editor
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......
Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/


int main_1()
{
	int array[array_size];

	for (int i = 0; i < array_size; i++)
	{
		array[i] = i + 1;
	}
	for (int i = 0; i < array_size; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}