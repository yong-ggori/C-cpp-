//=========================================
//              복사 생성자
//=========================================
#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Circle {
	int radius;
	char name[12] = "";
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	Circle(const Circle&);
	void setRadius(int r) { radius = r; }
	void setName(const char* np) { strcpy(name, np); }
	char* getName() { return name; }
	double getArea();
};

//void circle_print(Circle*);
Circle::Circle(const Circle& c) {	// 디폴트한 복사 생성자
	this->radius = c.radius;
	strcpy(this->name, c.name);
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle src(30);
	src.setName("지구본");
	Circle dest(src);

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "name : " << src.getName() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl;
	cout << "name : " << dest.getName() << endl;


#if 0
	string str("123451234211145623");
	cout << str.size() << endl;
	cout << str.capacity() << endl;
	cout << str.find("111") << endl;

	string str2("I");
	str2.append(" Love");
	cout << str2 << endl;

	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getArea() << endl << q->getArea() << endl;
	delete p, q;


	Circle circleArray[3];		//포인터 상수 -> 값을 증가 시킬수 없다. circleArray++ 불가능
	int count = 0, radiusValue = 10;

	do {
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
#endif
}
void circle_print(Circle* p) {
	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "의 면적은 " << (p++)->getArea() << endl;
}