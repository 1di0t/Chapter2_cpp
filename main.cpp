#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;

    ifstream inStrm("protein.txt");

    if (!inStrm.is_open())
    {
        cout << "protein.txtÀ» ¿­ ¼ö ¾ø½À´Ï´Ù." << endl;
        assert(false);
    }
    // read file
    for (int i = 1; i <= 10; i++)
    {
        inStrm >> data ;
        cout << data << " ";
    }
    // ÆÄÀÏ ´Ý±â 
    inStrm.close();
    // after return ofstream °´Ã¼°¡ ¼Ò¸ê
    return 0;
}