#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	//Point() { x = 0, y = 0; }										// 기본 생성자 정의
	Point(int x = 0, int y = 0) { this->x = x, this->y = y; }		// 디폴트 매개 변수 정의
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};
class ColorPoint :public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();
}

int main() {
	//Point p;
	//p.showPoint();

	ColorPoint cp;
	cp.showPoint();
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
}