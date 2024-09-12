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
};
//General function upgrade version
Complex operator+(const Complex& left,const Complex& right) {//Using reference variable to save memory //add const(read only) to protect the original class
    int real = left.real_num + right.real_num;
    int imaginary = left.imaginary_num + right.imaginary_num;

    return Complex(real, imaginary);
}

int main() {
    Complex complex(10,8);
    Complex complex2(-3, 8);
    cout << complex.imaginary_num << endl;

    //Complex complex3 = complex.operator+(complex2);//operating like this code in member function
    //Complex complex3 = operator+(complex,complex2) //operating like this code in general function
    Complex complex3 = complex + complex2;
    

    complex3.printing();

    return 0;
}
