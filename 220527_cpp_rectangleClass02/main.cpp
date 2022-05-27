#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	bool isSquare();
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
};
Rectangle::Rectangle() : Rectangle(1){} //위임 생성자
//Rectangle::Rectangle() {				//Default(기본) 생성자, 매개변수 없는 생성자는 
//										//컴파일 시 자동으로 생성된다.
//	width = height = 1;
//}
Rectangle::Rectangle(int w, int h) : width(w), height(h) {
	//width = w;
	//height = h;
}
Rectangle::Rectangle(int length) {
	width = height = length;
}
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main(void) {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;

	return 0;
}