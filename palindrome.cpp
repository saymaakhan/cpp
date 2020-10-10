#include <iostream>
//#include <cstring>
using namespace std; 

int main()
{
	char string1[] = "racecar";
	//int size = strlen(string1);
	int is_palindrome = 1;
	int size=0;
	char* p = string1;

	while (*p != '\0') // get size of string 
	{
		++p;
		++size; 
	}


	for (int i = 0; i < size; ++i) //compare all symmetrical elements in array 
	{
		if (string1[i] != string1[size - i - 1])
		{
			is_palindrome = 0;
			break;
		}
	}

	if (is_palindrome == 0) 
	{
		cout << "Not a palindrome" << endl;
	}
	else
	{
		cout << "Is a palindrome" << endl;
	}

	return 0;
}