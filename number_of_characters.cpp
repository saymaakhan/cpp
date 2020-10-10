//find number of characters in string excluding whitespaces

#include <iostream>
using namespace std;

int array_length(char*);

int main() {
	char string[] = "hello world";
	cout << "The length of the string is: " << array_length(string) << "characters." <<endl;

	return 0;
}

int array_length(char* sPtr) {
	int total = 0;
	while (*sPtr != '\0') {
		if (*sPtr != ' ') {
			++total;
		}
		++sPtr;
	}
	return total;
}