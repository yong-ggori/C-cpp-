#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;; this->punch = punch;
	}
	void show();
	Power operator+ (Power&);				// + 연산자 함수 선언
	bool operator== (Power&);
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power Power::operator+(Power& op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;		// kick 더하기
	tmp.punch = this->punch + op2.punch;	// punch 더하기
	return tmp;							
}
bool Power::operator== (Power& instance) {
	if ((instance.kick == this->kick) && (instance.punch == this->punch)) return true;
	else return false;
}

int main(void) {
	Power a(3, 5), b(3, 5), c;
	c = a + b;
	a.show();
	b.show();
	c.show();
	if (a == b) cout << "두 power 객체가 같다." << endl;
	else cout << "두 power 객체가 같지 않다." << endl;
}