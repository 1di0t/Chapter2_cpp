#pragma once
#include <iostream>
#include <string>

using namespace std;

class Complex {
private:
    int real_num;
    int imaginary_num;
    string operator_buff;
public:
    Complex();
    Complex(int real_num, int imaginary_num);
    void real_num_setter(int real_num);
    int real_num_getter() const ;
    void imaginary_num_setter(int imaginary_num);
    int imaginary_num_getter() const;

    Complex operator++();
    Complex operator++(int);
    Complex operator+(Complex& right);
    Complex operator*(Complex& right);

    friend ostream& operator<< (ostream& out, Complex& right);
    friend istream& operator>> (istream& in, Complex& complex);

}