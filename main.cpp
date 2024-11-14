#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main() {
	try {
		int* ptr = new int[5000000000];
		delete ptr;
		ptr = nullptr;
		cout << "complete";
	}
	catch (const bad_alloc& e) {//catch allocation error
		cout << "memory alloc error";
	}
}