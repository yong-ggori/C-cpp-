#ifndef _PRIVATEACCESSERROR_H_ //_PRIVATEACCESSERROR_H_가 정의 되지 않으면 시행
#define _PRIVATEACCESSERROR_H_ //_PRIVATEACCESSERROR_H_ 정의, 즉 헤더파일 한번만 실행하게 된다.

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

#endif // !_PRIVATEACCESSERROR_H_