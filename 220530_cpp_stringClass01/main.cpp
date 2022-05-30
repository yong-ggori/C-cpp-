#include <iostream>
#include <string>
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
	string str("123451234211145623");
	cout << str.size() << endl;
	cout << str.capacity() << endl;
	cout << str.find("111") << endl;

	string str2("I");
	str2.append(" Love");
	cout << str2 << endl;


#if 0
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);

	cout << p->getArea() << endl << q->getArea() << endl;
	delete p, q;


	Circle circleArray[3];		//������ ��� -> ���� ���� ��ų�� ����. circleArray++ �Ұ���
	int count = 0, radiusValue = 10;

	do {
		circleArray[count++].setRadius(radiusValue);
		radiusValue += 10;
	} while (count != 3);
	//circleArray[0].setRadius(10);
	//circleArray[1].setRadius(20);
	//circleArray[2].setRadius(30);

	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "�� ������ " << circleArray[idx].getArea() << endl;

	circle_print(circleArray);
	//Circle* p;					//������ ���� -> ���� ���� ��ų�� �ִ�. p++, p-- ����
	//p = circleArray;
	//for (int idx = 0; idx < 3; idx++) 
	//	cout << "Circle " << idx << "�� ������ " << (p++)->getArea() << endl;
#endif
}
void circle_print(Circle* p) {
	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "�� ������ " << (p++)->getArea() << endl;
}