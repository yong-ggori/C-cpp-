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
	friend void running(Animal* pAnimal);				// freind �Լ� ���
	virtual void crying() = 0;							// ���� ���� �Լ� ���

	~Animal() { cout << "Animal �Ҹ�" << endl; }
};
Animal::Animal(string name = "", int age = 0) {			// ����Ʈ �Ű� ���� ����ؼ� ����Ʈ ������ ȣ��
	this->name = name;
	this->age = age;

	cout << "Animal ����" << endl;
}
Animal::Animal(const Animal& animal) {					// ���� ������
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
		cout << "�������� " << this->bark << endl;
	}

	~Dog() { cout << "Dog �Ҹ�" << endl; }
};
Dog::Dog(string name = "", int age = 0, string bark = "") : Animal(name, age) {
	this->bark = bark;

	cout << "Dog ����" << endl;
}
Dog::Dog(const Dog& dog) : Animal(dog) {					// ���� ������
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
		cout << "����̴� " << this->bark << endl;
	}

	~Cat() { cout << "Cat �Ҹ�" << endl; }
};
Cat::Cat(string name = "", int age = 0, string bark = "") : Animal(name, age) {
	this->bark = bark;

	cout << "Cat ����" << endl;
}
Cat::Cat(const Cat& cat) : Animal(cat) {					// ���� ������
	this->bark = cat.bark;
}

void running(Animal* pAnimal) {
	cout << pAnimal->name << "�� �޸���." << endl;
}
void crying(Animal* pAnimal) {
	pAnimal->crying();
}

int main() {
	cout << "-- �߻�Ŭ������ �Ļ� Ŭ���� ���� --\n";
	Dog* dog = new Dog("������", 4, "�۸�");
	Cat* cat = new Cat("�����", 2, "�߿�");

	cout << "\n-- �Ű� ������ ������ ���� --\n";
	crying(dog);
	crying(cat);
	running(dog);
	running(cat);

	cout << "\n-- �⺻ ���� ������ ���� ���� --\n";
	Dog copyDog(*dog);
	cout << copyDog.getName() << endl;
	cout << copyDog.getAge() << endl;
	cout << copyDog.getBark() << endl;

	cout << "\n-- �Ҹ��� ���� --\n";
	delete dog;
	delete cat;
	return 0;
}