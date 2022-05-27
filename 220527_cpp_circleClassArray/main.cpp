#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

void circle_print(Circle*);

double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circleArray[3];		//포인터 상수 -> 값을 증가 시킬수 없다. circleArray++ 불가능
	int count = 0, radiusValue = 10;

	do{
		circleArray[count++].setRadius(radiusValue);
		radiusValue += 10;
	} while (count != 3);
	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);
	//circleArray[2].setRadius(30);

	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "의 면적은 " << circleArray[idx].getArea() << endl;

	circle_print(circleArray);
	//Circle* p;					//포인터 변수 -> 값을 증감 시킬수 있다. p++, p-- 가능
	//p = circleArray;
	//for (int idx = 0; idx < 3; idx++) 
	//	cout << "Circle " << idx << "의 면적은 " << (p++)->getArea() << endl;
	return 0;
}
void circle_print(Circle* p) {	
	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "의 면적은 " << (p++)->getArea() << endl;
}