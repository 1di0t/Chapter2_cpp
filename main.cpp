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
        cout << "protein.txt�� �� �� �����ϴ�." << endl;
        assert(false);
    }
    // read file
    for (int i = 1; i <= 10; i++)
    {
        inStrm >> data ;
        cout << data << " ";
    }
    // ���� �ݱ� 
    inStrm.close();
    // after return ofstream ��ü�� �Ҹ�
    return 0;
}