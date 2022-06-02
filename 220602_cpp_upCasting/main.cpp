#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	//Point() { x = 0, y = 0; }										// 기본 생성자 정의
	Point(int x = 0, int y = 0) { this->x = x, this->y = y; }		// 디폴트 매개 변수 정의
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};
class ColorPoint :public Point {
	string color;
public:
	void setColor(string color) { this->color = color; }
	void showColorPoint();
};
class GrayPoint :public Point {
	string color;
	string color1;
public:
	void setColor(string color) { this->color = color; }
	void setColor1(string color1) { this->color1 = color1; }
	void showColorPoint();
	void showColorPoint1();
};

void ColorPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();
}
void GrayPoint::showColorPoint() {
	cout << color << " : ";
	showPoint();
}
void GrayPoint::showColorPoint1() {
	cout << color1 << " : ";
	showPoint();
}

void testShow(Point* p, string type) {						// 업 캐스팅으로 받아준 다음
	if (type == typeid(ColorPoint).name()) {		
		ColorPoint* cp = (ColorPoint*)p;		// 다운 캐스팅
		cp->showColorPoint();
	}
	else if(type == typeid(GrayPoint).name()){
		GrayPoint* gp = (GrayPoint*)p;			// 다운 캐스팅
		gp->showColorPoint();
	}
}

//void testShow(ColorPoint& p) {
//	p.showColorPoint();
//}
//
//void testShow(GrayPoint& p) {
//	p.showColorPoint();
//}


int main() {
	Point* p;
	ColorPoint cp;
	GrayPoint gp;

	p = &cp;

	cp.set(3, 4);
	cp.setColor("Red");

	gp.set(1, 2);
	gp.setColor("Gray");
	gp.setColor1("Black");

	//testShow(cp);
	//testShow(gp);
	testShow(&cp, typeid(cp).name());
	testShow(&gp, typeid(gp).name());

	cout << typeid(cp).name() << endl;
	cout << typeid(*p).name() << endl;


#if 0
	Point* p = new Point;
	ColorPoint* cp = new ColorPoint;
	cp = (ColorPoint*)p;
#endif	
#if 0
	//Point p;
	//p.showPoint();
	ColorPoint cp;
	ColorPoint* pDer = &cp;
	Point* pBase = pDer;

	pDer->set(3, 4);
	pBase->showPoint();
	pDer->setColor("Red");
	pDer->showColorPoint();
	pDer = (ColorPoint*)pBase;
#endif	
#if 0
	ColorPoint cp;
	cp.showPoint();
	cp.set(3, 4);
	cp.setColor("Red");
	cp.showColorPoint();
#endif
}