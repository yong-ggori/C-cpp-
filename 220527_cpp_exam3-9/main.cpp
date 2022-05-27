#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	//void f();
	//PrivateAccessError();
public:
	void setA(int);		//a의 값 설정 해주는 함수
	int getA();			//a의 값 리턴 해주는 함수

	int b;

	PrivateAccessError();
	PrivateAccessError(int x);

	void g();
	void f();
};
void PrivateAccessError::setA(int a) {
	this->a = a;
}
int PrivateAccessError::getA() {
	return a = 30;
}
PrivateAccessError::PrivateAccessError() {
	a = 1;
	b = 1;
}
PrivateAccessError::PrivateAccessError(int x) {
	a = x;
	b = x;
}
void PrivateAccessError::f() {
	a = 5;
	b = 5;
}
void PrivateAccessError::g() {
	a = 6;
	b = 6;
}
int main(void) {
	PrivateAccessError objA;
	PrivateAccessError objB(100);

	//objB.a = 10;
	objB.setA(10);
	cout << "getA() return value : " << objB.getA() << endl;
	objB.b = 20;
	objB.f();
	objB.g();

	return 0;
}