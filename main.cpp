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
        cout << "protein�� �� �� �����ϴ�.";
        assert(false);
    }
    // write to file
    for (int i = 1; i <= 10; i++)
    {
        outStrm << i * 3 << "  ";
    }
    // ���� �ݱ� 
    outStrm.close();
    // after return ofstream ��ü�� �Ҹ�
    return 0;
}