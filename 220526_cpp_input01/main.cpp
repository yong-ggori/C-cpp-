#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "�̸��� �Է��ϼ��� : ";
	char name[11];
	cin >> name;

	cout << "�̸��� " << name << "�Դϴ�." << endl;

#if 0 // 0�̸� ������ �������� ���� ��Ų�ٴ� ��, 1�� �ٲ��ָ� ������ ������ ���� ��Ų��.
	double width, height, area;;

	cout << "input w, h >> ";
	cin >> width >> height;

	area = width * height;

	cout << "area is " << area << endl;
#endif
	return 0;
}