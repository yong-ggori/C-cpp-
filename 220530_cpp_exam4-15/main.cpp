#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� & �����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');
	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;

	while (1) {
		int fIndex = s.find(f, startIndex);
		if (fIndex == -1) break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << endl << "����� ���ڿ� : " << endl << s << endl;
}