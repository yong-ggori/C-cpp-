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
	Circle circleArray[3];		//������ ��� -> ���� ���� ��ų�� ����. circleArray++ �Ұ���
	int count = 0, radiusValue = 10;

	do{
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
	return 0;
}
void circle_print(Circle* p) {	
	for (int idx = 0; idx < 3; idx++)
		cout << "Circle " << idx << "�� ������ " << (p++)->getArea() << endl;
}