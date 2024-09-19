/**************************************************************
                    Operator Overloading
 **************************************************************/
#include <iostream>

using namespace std;


class Complex {//º¹¼Ò¼ö
private:
    int real_num;
    int imaginary_num;

public:
    Complex(int real_num,int imaginary_num) {
        this->real_num = real_num;
        this->imaginary_num = imaginary_num;
    }

    int real_num_setter(int real_num) { this->real_num = real_num; }
    int real_num_getter() {return real_num;}
    int imaginary_num_setter(int imaginary_num) { this->imaginary_num = imaginary_num; }
    int imaginary_num_getter() { return imaginary_num; }

    //prefix operator
    Complex operator++();
    //postfix operator
    Complex operator++(int);
};
//prefix operator
Complex Complex::operator++() {
    return Complex(++this->real_num, this->imaginary_num);

    //this->real_num += 1;
    //return Complex(++this->real_num, this->imaginary_num);
}
//postfix operator
Complex Complex::operator++(int) {
    Complex backup(this->real_num, this->imaginary_num);
    this->real_num++;
    return backup;
}

//Nonmember operator overloading
ostream& operator<< (ostream& left, Complex& right) {
    string operator_buff = " +";
    if (right.imaginary_num_getter() < 0) {
        operator_buff = ' ';
    }
    
    left << right.real_num_getter() << operator_buff << right.imaginary_num_getter() << "i\n";
    return left;
}

int main() {
    Complex complex_1(10, 9);
    Complex complex_2 = complex_1++;
    cout << complex_2;
    Complex complex_3(5,-99);
    cout << complex_3;
    return 0;
}
