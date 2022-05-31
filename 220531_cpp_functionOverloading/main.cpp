#include <iostream>
using namespace std;

int big(int a, int b) {
	if (a > b) return a;
	else return b;
}
int big(int* a, int size) {
	int res = a[0];
	for (int idx = 1; idx < size; idx++)
		if (res < a[idx]) res = a[idx];
	return res;
}

int main(void) {
	int array[5] = { 1, 9, -2, 8, 6 };
	cout << big(2, 3) << endl;
	cout << big(array, 5) << endl;
}