#ifndef _PRIVATEACCESSERROR_H_ //_PRIVATEACCESSERROR_H_�� ���� ���� ������ ����
#define _PRIVATEACCESSERROR_H_ //_PRIVATEACCESSERROR_H_ ����, �� ������� �ѹ��� �����ϰ� �ȴ�.

#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	//void f();
	//PrivateAccessError();
public:
	void setA(int);		//a�� �� ���� ���ִ� �Լ�
	int getA();			//a�� �� ���� ���ִ� �Լ�

	int b;

	PrivateAccessError();
	PrivateAccessError(int x);

	void g();
	void f();
};

#endif // !_PRIVATEACCESSERROR_H_