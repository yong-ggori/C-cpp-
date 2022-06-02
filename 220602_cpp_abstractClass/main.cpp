#include <iostream>
using namespace std;

class Calculator {
	void input() {
		cout << "���� 2���� �Է��ϼ��� >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

class Adder : public Calculator {
protected:
	virtual int calc(int a, int b) {
		return a + b;
	}
};

class Substractor : public Calculator {
protected:
	virtual int calc(int a, int b) {
		return a - b;
	}
};

int mani() {
	Adder add;
	Substractor sub;

	add.run();
	sub.run();
}