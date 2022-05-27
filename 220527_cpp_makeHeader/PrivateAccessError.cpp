#include "PrivateAccessError.h"

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

