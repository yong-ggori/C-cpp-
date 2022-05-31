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
	Power operator+ (Power&);				// + ������ �Լ� ����
	bool operator== (Power&);
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}

Power Power::operator+(Power& op2) {
	Power tmp;
	tmp.kick = this->kick + op2.kick;		// kick ���ϱ�
	tmp.punch = this->punch + op2.punch;	// punch ���ϱ�
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
	if (a == b) cout << "�� power ��ü�� ����." << endl;
	else cout << "�� power ��ü�� ���� �ʴ�." << endl;
}