#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
	string name;
public:
	Pokemon() :name("가짜") {
	}
	Pokemon(const string& name) :name(name) {
		cout  <<  name  <<  "을(를) 잡았다!" << endl;
	}
	string get_poke() {
		return name;
	}
};