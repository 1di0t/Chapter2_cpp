/**************************************************************
 * invalid_argument ��ü�� ����ؼ� 0���� ���� ���           *
 * ���ܸ� �߻���Ű�� ó���ϴ� ���α׷�                        *
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
        throw string("�Ҵ� ����: �ε����� ������ ������ϴ�");
    }
    ptr[position] = val;
    
}

int DynamicArrary::getAt(int position)
{
    if (position > size) {
        throw "���� ����: �ε����� ������ ������ϴ�";
    }
    return ptr[position];
}


