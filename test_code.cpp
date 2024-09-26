/**************************************************************
                    Operator Overloading
 **************************************************************/
#include <iostream>
#include <string>

using namespace std;


class Complex {//복소수
private:
    int real_num;
    int imaginary_num;
    string operator_buff = "+";

public:
    Complex():real_num(0), imaginary_num(0){}
    Complex(int real_num,int imaginary_num):real_num(real_num),imaginary_num(imaginary_num){
    }


    void real_num_setter(int real_num) { this->real_num = real_num; };
    int real_num_getter() const { return real_num; };
    void imaginary_num_setter(int imaginary_num) { this->imaginary_num = imaginary_num; };
    int imaginary_num_getter() const { return imaginary_num; };


    Complex operator++() {//prefix operator
        return Complex(++this->real_num, this->imaginary_num);

        //this->real_num += 1;
        //return Complex(++this->real_num, this->imaginary_num);
    };
    Complex operator++(int) {//postfix operator
        Complex backup(this->real_num, this->imaginary_num);
        this->real_num++;
        return backup;
    };//postfix operator
    Complex operator+(Complex& right) {
        int real = this->real_num_getter() + right.real_num_getter();
        int imaginary = this->imaginary_num_getter() + right.imaginary_num_getter();

        return Complex(real, imaginary);
    }
    

    //relationship between ostream and Complex
    friend ostream& operator<< (ostream& out, Complex& right) {

        out << right.real_num_getter() << right.operator_buff << right.imaginary_num_getter() << "i\n";
        return out;
    }
    friend istream& operator>> (istream& in,Complex& complex) {//custom input
        string input;
        cout << "실수, 허수 입력\nex)10+9i\n";
        in >> input;
        size_t operatorIndex = input.rfind('+');
        size_t imaginaryIndex = input.rfind('i');
        if (operatorIndex == string::npos) {
            operatorIndex = input.rfind('-');
            complex.operator_buff = "-";
        }


        if (operatorIndex != string::npos 
            && imaginaryIndex != string::npos 
            && imaginaryIndex > operatorIndex) {
            complex.real_num = stoi(input.substr(0, operatorIndex));
            complex.imaginary_num = stoi(input.substr(operatorIndex + 1, imaginaryIndex-operatorIndex-1));
        }
        else {
            cout << "다시 입력해주세요";
        }

        return in;
    }

    
};



int main() {
    Complex c0;

    cin >> c0;
    cout << c0;
    return 0;
}
