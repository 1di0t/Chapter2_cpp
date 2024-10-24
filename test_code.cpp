#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main()
{
    DynamicArrary darray(5);

    try {
        darray.setAt(0, 24);
        darray.setAt(3, -7);


        cout << darray.getAt(3)<<endl;
        cout << darray.getAt(0) << endl;
        
        cout << darray.getAt(11) << endl;
        darray.setAt(11, 7);
    }
    catch(int error){
        cout << "ÀÎµ¦½º ¹üÀ§ ÀÌÅ»" << endl;
    }
    catch (double error) {
        cout << "get ÀÎµ¦½º ¹üÀ§ ÀÌÅ»" << endl;
    }
    return 0;
}
