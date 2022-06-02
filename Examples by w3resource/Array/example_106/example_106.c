#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

#include "myStr.h"
#include <ctype.h>

/*
106. Write a program in C to convert the array in such a way that double its value and replace
the next number with 0 if current and next element are same and rearrange the array such that
all 0's shifted to the end. Go to the editor
Expected Output:
The given array is: 0 3 3 3 0 0 7 7 0 9
The new array is: 6 3 14 9 0 0 0 0 0 0
*/
/*
My solution consist of three files:
1. main.c
2. myStr.h
3. myStr.c
*/


int main_106()
{
	char input_bufer[50];
	gets(input_bufer);

	const int size_int_array = get_number_of_digits(input_bufer);

	int* array = calloc(size_int_array, sizeof(int));

	copy_charElements_to_intArray(input_bufer, array);

	add_same_two_elements(array, size_int_array);

	print_intArray(array, size_int_array);

	free(array);
	array = NULL;
	return 0;
}
