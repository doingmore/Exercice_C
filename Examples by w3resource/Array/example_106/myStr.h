#ifndef MY_STR_H
#define MY_STR_H
#include <ctype.h>
#include <stdbool.h>

int get_number_of_charachters(const char* string);

int get_number_of_digits(const char* string);

void copy_charElements_to_intArray(const char* input,int* array);

void add_same_two_elements(int* array , const int size);

void print_intArray(int* array, const int size);


#endif // !MY_STR_H
