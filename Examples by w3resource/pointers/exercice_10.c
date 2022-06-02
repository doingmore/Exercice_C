#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

#define size_of_str 40

/*
10. Write a program in C to Calculate the length of the string using a pointer. Go to the editor
Test Data :
Input a string : w3resource
Expected Output :

The length of the given string w3resource
is : 10
*/


int getSizeOfString(const char* array)
{
	int answer = 0;
	int index = 0;
	while (*(array + index) != '\0')
	{
		index++;
		answer++;
	}
	answer--;// for null terminate
	return answer;
}

int main_10()
{
	const int size = size_of_str;
	char string[size];

	fgets(string, sizeof(string), stdin);

	printf("The length of entered string is: %d characters", getSizeOfString(string));

	return 0;
}