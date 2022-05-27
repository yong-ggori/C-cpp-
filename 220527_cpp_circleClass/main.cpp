#include <iostream>

using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main(void) {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut's area is " << area << endl;

	Circle pizza;
	pizza.radius = 3;
	area = pizza.getArea();
	cout << "pizze's area is " << area << endl;

	return 0;
}