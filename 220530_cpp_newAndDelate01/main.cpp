#include <iostream>
using namespace std;

int main(void) {
	cout << "�Է��� ������ ������? ";
	int count;
	cin >> count;
	if (count <= 0) return 0;
	int* p = new int[count];
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int idx = 0; idx < count; idx++) {
		cout << idx + 1 <<"��° ���� : ";
		cin >> p[idx];
	}

	int sum = 0;
	for (int idx = 0; idx < count; idx++)
		sum += p[idx];
	cout << "��� = " << sum / count << endl;

	delete[] p;
}