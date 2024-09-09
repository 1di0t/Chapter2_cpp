//#include <iostream>
//using namespace std;
//
//class Flyable {//¸ðµç ÇÔ¼ö°¡ virtual
//public:
//	virtual void fly() = 0;//pure virtual func
//	Flyable() {};
//	virtual ~Flyable() {}
//};
//
//class Pokemon {
//public:
//	Flyable* flyalbe;
//
//	Pokemon() {}
//
//	Pokemon(Flyable* flyable) {
//		this->flyalbe = flyable;
//	}
//	virtual ~Pokemon() {
//		cout << "Pokemon died\n";
//		delete flyalbe;
//		flyalbe = nullptr;
//
//	}
//	virtual void attack() {
//		cout << "attack!\n";
//	}
//	void performFly() {
//		flyalbe->fly();
//	}
//};
//class Pika :public Pokemon {
//public:
//	Pika() {};
//	Pika(Flyable* flyable) {
//		this->flyalbe = flyable;
//	}
//	~Pika() {
//		cout << "pikachu died\n";
//		delete this->flyalbe;
//		this->flyalbe = nullptr;
//	}
//	void attack() {
//		cout << "E-attack!\n";
//	}
//};
//class Wings :public Flyable{
//public:
//	void fly() {
//		cout << "ÆÄ´ßÆÄ´ß\n";
//	}
//	Wings() {
//		cout << "Wings created\n";
//	}
//	~Wings() {
//		cout << "Wings broken\n";
//	}
//};
//class Jetpack :public Flyable {
//public:
//	void fly() {
//		cout << "½¹\n";
//	}
//	Jetpack() {
//		cout<< "Jetpack created\n";
//	}
//	~Jetpack() {
//		cout << "Jetpack broken\n";
//	}
//};
//int main() {
//	Wings* wings = new Wings();
//	Pika* pika = new Pika(wings);
//	pika->attack();
//	pika->performFly();
//	delete pika;
//	pika = nullptr;
//
//	Pokemon* pika2 = new Pika(new Jetpack);
//	pika2->attack();
//	pika2->performFly();
//	delete pika2;
//	pika2 = nullptr;
//
//
//
//	return 0;
//}