#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main()
{
    DynamicArrary darray(5);
    darray.setAt(0, 24);
    darray.setAt(3, -7);
    int r = darray.setAt(11, 7);
    if (r  == - 1) {
        cout << "�ε��� ���� �ʰ�";
    }
    else {
        cout << "����";
    }

    cout << darray.getAt(3);

    return 0;
}
