#include <iostream>
using namespace std;

int main(void) {
	cout << "입력할 정수의 개수는? ";
	int count;
	cin >> count;
	if (count <= 0) return 0;
	int* p = new int[count];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int idx = 0; idx < count; idx++) {
		cout << idx + 1 <<"번째 정수 : ";
		cin >> p[idx];
	}

	int sum = 0;
	for (int idx = 0; idx < count; idx++)
		sum += p[idx];
	cout << "평균 = " << sum / count << endl;

	delete[] p;
}