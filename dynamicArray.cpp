/**************************************************************
 * invalid_argument 객체를 사용해서 0으로 나눌 경우           *
 * 예외를 발생시키고 처리하는 프로그램                        *
 **************************************************************/
#include <stdexcept>
#include <iostream>
#include "dynamicArray.h"
using namespace std;


DynamicArrary::DynamicArrary()
{
}

DynamicArrary::DynamicArrary(int size) :size(size) {
    ptr = new int[size];
}

DynamicArrary::~DynamicArrary()
{
    delete ptr;
    ptr = nullptr;
}

void DynamicArrary::setAt(int position, int val)
{
    if (position < 0 || position >= size) {
        throw string("할당 오류: 인덱스의 범위를 벗어났습니다");
    }
    ptr[position] = val;
    
}

int DynamicArrary::getAt(int position)
{
    if (position > size) {
        throw "접근 오류: 인덱스의 범위를 벗어났습니다";
    }
    return ptr[position];
}


