#include <iostream>
#include <string> //string Ŭ���� ����ϱ� ���� ��� ����
using namespace std;

int main(int argc, char* argv[]) {
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + "�� �θ� ������ ? ";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << ")";

	getline(cin, singer);//��ĭ �����ϴ� ���ڿ� �Է� ����
	if (singer == elvis)	cout << "�¾ҽ��ϴ�.";
	else	cout << "Ʋ�Ƚ��ϴ�." + elvis + "�Դϴ�." << endl;
}