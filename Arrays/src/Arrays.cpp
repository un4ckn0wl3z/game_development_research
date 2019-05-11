//============================================================================
// Name        : Arrays.cpp
// Author      : Anuwat
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void Func(int array[], int len);

int main() {

	const int MAX = 5;
	int intArrays[MAX] = { 2, 4, 6, 8, 10 };

	int * ptr = nullptr;

	ptr = intArrays;

	cout << "The value of pointed to by ptr is :" << *ptr << endl;

	cout << "The address of element 1 of intArrays : " << &intArrays[0] << endl;
	cout << "The address of element 0 of intArrays : " << &intArrays[1] << endl;

	int array[] = { 1, 3, 5, 7, 9 };

	Func(array, 5);

	for (int i = 0; i < 5; i++) {
		cout << "array[" << i << "] = " << array[i] << endl;
	}

	return 0;
}

void Func(int array[], int len) {
	for (int i = 0; i < len; i++) {
		array[i]++;
	}
}

