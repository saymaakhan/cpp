//format table with histogram displaying value of each element in an array 

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	const int arraysize = 5;
	int a[arraysize] = { 1,3,5,3,4 };
	cout << "Element" << setw(13) << "Value" << setw(17) << "Histogram" << endl;
	for (int i = 0; i < arraysize; i++) {
		cout << setw(7) << i << setw(13) << a[i] << "        ";
		for (int j = 0; j < a[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}