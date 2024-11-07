/**************************************************************
 * invalid_argument 객체를 사용해서 0으로 나눌 경우           *
 * 예외를 발생시키고 처리하는 프로그램                        *
 **************************************************************/
#include <stdexcept>
#include <iostream>
#include "dynamicArray.h"
#include "customException.h"
using namespace std;


DynamicArrary::DynamicArrary()
{
}



DynamicArrary::DynamicArrary(int size) try :size(size) {

    ptr = new int[size];
    throw "1028";
}
catch (...) {
        delete ptr;
        ptr = nullptr;
        cout << "constructor error!\n";
        throw;
}


DynamicArrary::~DynamicArrary()
{
    cout << "dead"<<endl;
    delete ptr;
    ptr = nullptr;
}

void DynamicArrary::setAt(int position, int val)
{
    if (position < 0 || position >= size) {
        throw CustomException(404, "할당 오류: 인덱스의 범위를 벗어났습니다\n", this);
    }
    ptr[position] = val;
    
}

int DynamicArrary::getAt(int position)
{
    if (position > size) {
        //throw "접근 오류: 인덱스의 범위를 벗어났습니다";
        throw CustomException(404, "접근 오류: 인덱스의 범위를 벗어났습니다\n",this);
    }
    return ptr[position];
}


