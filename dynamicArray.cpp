/**************************************************************
 * invalid_argument ��ü�� ����ؼ� 0���� ���� ���           *
 * ���ܸ� �߻���Ű�� ó���ϴ� ���α׷�                        *
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
        throw CustomException(404, "�Ҵ� ����: �ε����� ������ ������ϴ�\n", this);
    }
    ptr[position] = val;
    
}

int DynamicArrary::getAt(int position)
{
    if (position > size) {
        //throw "���� ����: �ε����� ������ ������ϴ�";
        throw CustomException(404, "���� ����: �ε����� ������ ������ϴ�\n",this);
    }
    return ptr[position];
}


