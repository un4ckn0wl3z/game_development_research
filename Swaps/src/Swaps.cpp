#include <iostream>

using namespace std;

void Swap(int & x, int & y);

int main() {

	int x = 20;
	int y = 30;

	cout << "BEFORE SWAP:" << endl;
	cout << "The value of x is : " << x << endl;
	cout << "The value of y is : " << y << endl;

	Swap(x, y);

	cout << "AFTER SWAP:" << endl;
	cout << "The value of x is : " << x << endl;
	cout << "The value of y is : " << y << endl;

}

void Swap(int & x, int & y) {
	int temp = x;
	x = y;
	y = temp;
}
