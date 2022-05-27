#include <iostream>
using namespace std;

class Circle {
private:
	int radius;			//�������� Circle Ŭ���� �������� ���� �����ϴ�.
public:
	void setRadius();
	int getRadius(int);
	Circle();
	Circle(int r);
	~Circle();			//deconstructor, �Ҹ���
	double getArea();
};

void print_circle_area(Circle*);
void Circle::setRadius() {
	radius = 9;
}
int Circle::getRadius(int Radius) {
	return this->radius = Radius;
}
Circle::Circle() : Circle(1) {} // ���� ������
//Circle::Circle() {		
//	Circle(1);
//	//radius = 1;
//	//cout << "������ " << radius << " �� �� ����" << endl;
//}
Circle::Circle(int r) {	//�����ڴ� Ŭ���� �� ���� �Լ��̱� ������
						//�󸶵��� private ������ �������� ������ �� �ִ�.
	radius = r;
	cout << "������ " << radius << " �� �� ����" << endl;
}
Circle::~Circle() {
	cout << "������ " << radius << " �� �� �Ҹ�" << endl;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle donut1(10);
Circle donut2(11);

int main(void) {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	//Circle* p;
	//p = &donut;
	print_circle_area(&donut);

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	return 0;
}
void print_circle_area(Circle* p) {
	double area = p->getArea();
	p->setRadius();
	cout << "donut ������ " << area << endl;
}