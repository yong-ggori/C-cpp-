#include <iostream>
using namespace std;
int main(int argc, char* argv) 
{
	int count = 0;

	cout << "������ ���� ���" << endl;
	for (int idx = 2; idx < 10; idx++) {
		for (int jdx = 1; jdx < 10; jdx++) {			
			cout << idx << "x" << jdx << "=" << idx * jdx << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "������ ���� ���" << endl;
	for (int idx = 1; idx < 10; idx++) {
		for (int jdx = 2; jdx < 10; jdx++) {
			cout << jdx << "x" << idx << "=" << idx * jdx << "\t";
		}
		cout << endl;
	}
	return 0;
}