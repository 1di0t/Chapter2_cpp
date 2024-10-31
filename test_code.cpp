#include "DynamicArray.h"
#include <iostream>
#include "customException.h"
using namespace std;

int main()
{
    DynamicArrary darray(5);

    try {
        darray.setAt(0, 24);
        darray.setAt(3, -7);


        cout << darray.getAt(3)<<endl;
        cout << darray.getAt(3) << endl;//garbage value
        cout << darray.getAt(0) << endl;
        
        cout << darray.getAt(11) << endl;
        darray.setAt(11, 7);
    }
    catch (string error) {//String object
        cout << error;
    }
    catch (const char* error) {//C style //because c doesn't has String object
        cout << error;
    }
    catch (CustomException customException) {
        cout << "errorCode: " << customException.getErrCode() << endl;
        cout << "error: " << customException.getErrMessage() << endl;
        cout << "error Addr: " << customException.getAddr() << endl;
    }
    return 0;
}
