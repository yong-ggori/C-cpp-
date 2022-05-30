//=============================================
//					참조 변수
//=============================================
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
void increase(Circle c) {
	int r = c.getRadius();
	c.setRadius(r + 1);
}

int main(void) {
	int n = 2;
	int& refn = n;

	cout << "n : " << n << " refn : " << refn << endl;
	cout << "n : " << n << " refn : " << refn << endl;

#if 0
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
#endif
}