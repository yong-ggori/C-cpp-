#include <iostream>
using namespace std;

class Circle {
private:
	int radius;			//�������� Circle Ŭ���� �������� ���� �����ϴ�.
public:
	Circle();
	Circle(int r);
	double getArea();
};
Circle::Circle() : Circle(1){} // ���� ������
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
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void) {
	Circle donut;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

	return 0;
}