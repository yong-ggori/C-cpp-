#include <iostream>
using namespace std;

class Circle {
private:
	int radius;			//반지름은 Circle 클래스 내에서만 접근 가능하다.
public:
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() : Circle(1){} // 위임 생성자
//Circle::Circle() {		
//	Circle(1);
//	//radius = 1;
//	//cout << "반지름 " << radius << " 인 원 생성" << endl;
//}
Circle::Circle(int r) {	//생성자는 클래스 내 속한 함수이기 때문에
						//얼마든지 private 변수인 반지름에 접근할 수 있다.
	radius = r;
	cout << "반지름 " << radius << " 인 원 생성" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void) {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

	return 0;
}