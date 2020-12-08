//reverse a string 
#include <iostream>
using namespace std;

void string_backwards(char*);

int main() {
	char string[] = "right way forward";
	string_backwards(string);
	return 0;
}

void string_backwards(char* sPtr) {
	int stringlength = 0;

	while (*sPtr != '\0') {
		++stringlength;
		++sPtr;
	}
	for (int i = stringlength; i > 0; --i) {
		cout << *(sPtr - 1);
		--sPtr;
	}
}