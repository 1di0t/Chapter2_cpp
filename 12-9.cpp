/**************************************************************
 * typeid 연산자로 클래스 이름을 확인하는 프로그램            *
 **************************************************************/
#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {};
class Horse {};

int main()
{
	Animal a;
	Horse h;
	int i;
	cout << typeid(a).name() << endl;
	cout << typeid(Animal).name() << endl;
	cout << typeid(h).name() << endl;
	cout << typeid(i).name() << endl;


	return 0;
}