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

int DynamicArrary::setAt(int position, int val)
{
    if (position < 0 || position >= size) {
        return -1;
    }
    ptr[position] = val;
    return 0;
}

int DynamicArrary::getAt(int position)
{
    return ptr[position];
}


