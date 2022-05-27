#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "input address : ";
	char address[100];
	cin.getline(address, 100, '*');
	cout << "주소는 " << address << "이다.\n";

	return 0;
}