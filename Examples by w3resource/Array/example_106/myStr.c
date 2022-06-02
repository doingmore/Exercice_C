#include "myStr.h"
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int get_number_of_charachters(const char* string)
{
	int answer = 0;
	int index = 0;
	while (*(string + index))
	{
		answer++;		
		index++;
	}
	return answer;
}

int get_number_of_digits(const char* string) 
{
	int answer = 0;
	int index = 0;

	while (*(string + index))
	{
		if (isdigit(*(string + index)) )
		{
		answer++;
		}
		index++;
	}

	return answer;
}

void copy_charElements_to_intArray(const char* input, int* array)
{
	const int char_array_size = get_number_of_charachters(input);
	const int int_array_size = get_number_of_digits(input);
	int index_int_array = 0;
	for (int i = 0; i < char_array_size; i++)
	{
		if (isdigit(*(input + i)) && index_int_array < int_array_size)
		{
			*(array + index_int_array) = (*(input + i) - 48);
			index_int_array++;
		}
		else
		{
			// do nothing
		}
	}
}

void add_same_two_elements(int* array, const int size)
{
	int previous_digit;
	bool first_digit_flag = false;
	for (int i = 0; i < size; i++)
	{
		if (first_digit_flag)
		{
			if (previous_digit == (*(array + i)) && previous_digit != 0)
			{
				int temp_value = *(array + i - 1);
				temp_value = temp_value * 2;
				*(array + (i - 1)) = temp_value;
				*(array + i) = 0;
			}
		}
		else
		{
			first_digit_flag = true;
		}
		previous_digit = *(array + i);

	}
}

void print_intArray(int* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(array + i));
	}
	printf("\n");
}