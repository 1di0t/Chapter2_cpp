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
        cout << "인덱스 범위 초과";
    }
    else {
        cout << "정상";
    }

    cout << darray.getAt(3);

    return 0;
}
