#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "이름을 입력하세요 : ";
	char name[11];
	cin >> name;

	cout << "이름은 " << name << "입니다." << endl;

#if 0 // 0이면 컴파일 과정에서 제외 시킨다는 뜻, 1로 바꿔주면 컴파일 과정에 포함 시킨다.
	double width, height, area;;

	cout << "input w, h >> ";
	cin >> width >> height;

	area = width * height;

	cout << "area is " << area << endl;
#endif
	return 0;
}