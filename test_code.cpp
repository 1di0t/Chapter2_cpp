/**************************************************************
                    Dynamic cast
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {//Abstract class
public:
	virtual void run() = 0;
};
class Horse :public Animal{
public:
	void run() {
		cout <<this<< "run with 4 legs Verrrrrrrry Fast\n";
	}
};
class Racoon : public Animal {
public:
	void run() {
		cout << "run slowly but Racoon is cute very cute\n";
	}
};

int main()
{
	Animal* horse = new Horse();//UpCast
	horse->run();

	Animal* horsee = new Horse();
	Horse* h = (Horse*)horsee;//Old style//DownCast
	h->run();

	

	Horse* h2 = dynamic_cast<Horse*>(horsee);//Modern style//DownCast
	h2->run();
	

	//racoon* racoon = (racoon*)horse;
	//racoon* racoon = dynamic_cast<racoon*>(horsee);//type이 일치하지 않으면 null 대입
	//racoon->run();
	//Search C++ Modern Casting
	
	

	return 0;
}