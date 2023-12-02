// Brian Pellrine
// CIS 1202 101
// December 2, 2023

#include <iostream>

using namespace std;

template<typename T>

//function that halves float/double values
T half(T val) {
	return val / 2;
}

//function that halves int values and rounds afterwards
int half(int val) {
	if (val % 2 == 0)
		return val / 2;
	else return (int)(val / 2) + 1;
}

int main() {

	//values to be halved
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}