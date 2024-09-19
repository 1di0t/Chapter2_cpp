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

    void real_num_setter(int real_num);
    int real_num_getter() const;
    void imaginary_num_setter(int imaginary_num);
    int imaginary_num_getter() const;

    Complex operator++();//prefix operator
    Complex operator++(int);//postfix operator
};
void Complex::real_num_setter(int real_num){ this->real_num = real_num; }
int Complex::real_num_getter() const { return real_num; }
void Complex::imaginary_num_setter(int imaginary_num) { this->imaginary_num = imaginary_num; }
int Complex::imaginary_num_getter() const { return imaginary_num; }



Complex Complex::operator++() {//prefix operator
    return Complex(++this->real_num, this->imaginary_num);

    //this->real_num += 1;
    //return Complex(++this->real_num, this->imaginary_num);
}

Complex Complex::operator++(int) {//postfix operator
    Complex backup(this->real_num, this->imaginary_num);
    this->real_num++;
    return backup;
}

Complex operator+(Complex& left,Complex& right) {
    int real = left.real_num_getter() + right.real_num_getter();
    int imaginary = left.imaginary_num_getter() + right.imaginary_num_getter();

    return Complex(real, imaginary);
}

ostream& operator<< (ostream& left, Complex& right) {//Nonmember operator overloading
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
    Complex complex_4 = complex_1 + complex_3;
    cout << complex_4;
    return 0;
}
