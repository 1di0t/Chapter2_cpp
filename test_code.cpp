/**************************************************************
                    Operator Overloading
 **************************************************************/
#include <iostream>

using namespace std;

class Complex {//º¹¼Ò¼ö
public:
    int real_num;
    int imaginary_num;

    Complex(int real_num,int imaginary_num) {
        this->real_num = real_num;
        this->imaginary_num = imaginary_num;
    }

    void printing() {
        cout << real_num << " + " << imaginary_num << "i\n";
    }

    //prefix operator
    Complex operator++() {
        return Complex(++this->real_num, this->imaginary_num);

        //this->real_num += 1;
        //return Complex(++this->real_num, this->imaginary_num);
    }
    //postfix operator
    Complex operator++(int) {
        Complex backup(this->real_num, this->imaginary_num);
        this->real_num++;
        return backup;
    }
};
//General function upgrade version
Complex operator+(const Complex& left,const Complex& right) {//Using reference variable to save memory //add const(read only) to protect the original class
    int real = left.real_num + right.real_num;
    int imaginary = left.imaginary_num + right.imaginary_num;

    return Complex(real, imaginary);
}


int main() {
    Complex complex_1(10, 9);
    Complex complex_2 = complex_1++;
    complex_2.printing();
    return 0;
}
