#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
//    ofstream outStrm;
//    // open file
//    outStrm.open("protein.txt");

    ofstream outStrm("protein.txt");

    if (!outStrm.is_open())
    {
        cout << "proteinÀ» ¿­ ¼ö ¾ø½À´Ï´Ù.";
        assert(false);
    }
    // write to file
    for (int i = 1; i <= 10; i++)
    {
        outStrm << i * 3 << "  ";
    }
    // ÆÄÀÏ ´Ý±â 
    outStrm.close();
    // after return ofstream °´Ã¼°¡ ¼Ò¸ê
    return 0;
}