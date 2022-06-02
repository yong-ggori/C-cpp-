#include <iostream>
using namespace std;

class Animal {
	string name;
	int age;
public:
	Animal(string name, int age);
	Animal(const Animal& animal);

	string getName() { return this->name; }
	int getAge() { return this->age; }

	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	friend void running(Animal* pAnimal);				// freind 함수 사용
	virtual void crying() = 0;							// 순수 가상 함수 사용

	~Animal() { cout << "Animal 소멸" << endl; }
};
Animal::Animal(string name = "", int age = 0) {			// 디폴트 매개 변수 사용해서 디폴트 생성자 호출
	this->name = name;
	this->age = age;

	cout << "Animal 생성" << endl;
}
Animal::Animal(const Animal& animal) {					// 복사 생성자
	this->name = animal.name;
	this->age = animal.age;
}

class Dog : public Animal {
	string bark;
public:
	Dog(string name, int age, string bark);
	Dog(const Dog& dog);

	string getBark() { return this->bark; }

	void setBark(string bark) { this->bark = bark; }
	virtual void crying() {
		cout << "강아지는 " << this->bark << endl;
	}

	~Dog() { cout << "Dog 소멸" << endl; }
};
Dog::Dog(string name = "", int age = 0, string bark = "") : Animal(name, age) {
	this->bark = bark;

	cout << "Dog 생성" << endl;
}
Dog::Dog(const Dog& dog) : Animal(dog) {					// 복사 생성자
	this->bark = dog.bark;
}

class Cat : public Animal {
	string bark;
public:
	Cat(string name, int age, string bark);
	Cat(const Cat& cat);

	string getBark() { return this->bark; }

	void setBark(string bark) { this->bark = bark; }
	virtual void crying() {
		cout << "고양이는 " << this->bark << endl;
	}

	~Cat() { cout << "Cat 소멸" << endl; }
};
Cat::Cat(string name = "", int age = 0, string bark = "") : Animal(name, age) {
	this->bark = bark;

	cout << "Cat 생성" << endl;
}
Cat::Cat(const Cat& cat) : Animal(cat) {					// 복사 생성자
	this->bark = cat.bark;
}

void running(Animal* pAnimal) {
	cout << pAnimal->name << "가 달린다." << endl;
}
void crying(Animal* pAnimal) {
	pAnimal->crying();
}

int main() {
	cout << "-- 추상클래스와 파생 클래스 구현 --\n";
	Dog* dog = new Dog("강아지", 4, "멍멍");
	Cat* cat = new Cat("고양이", 2, "야옹");

	cout << "\n-- 매개 변수의 다형성 구현 --\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);

	cout << "\n-- 기본 복사 생성자 직접 구현 --\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;

	cout << "\n-- 소멸자 실행 --\n";
	delete dog;
	delete cat;
	return 0;
}