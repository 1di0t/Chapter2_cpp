#include <iostream>
#include <string>
#include "smaller.h"
using namespace std;



int main()
{ 
    const char* s1 = "Byea";
    const char* s2 = "Bye Bye";
    cout << "Smaller(Bye, Bye Bye) = " << smaller(s1, s2) << endl;
    return 0;
}