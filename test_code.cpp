/**************************************************************
 * invalid_argument ��ü�� ����ؼ� 0���� ���� ���           *
 * ���ܸ� �߻���Ű�� ó���ϴ� ���α׷�                        *
 **************************************************************/
#include <stdexcept>
#include <iostream>
using namespace std;

// �Լ� ����
int quotient(int first, int second);

int main()
{
    int num1, num2;
    for (int i = 0; i < 3; i++)
    {
        cout << "������ �Է��ϼ���: ";
        cin >> num1;
        cout << "�� �ٸ� ������ �Է��ϼ���: ";
        cin >> num2;
        // try-catch ���
        try
        {
            cout << "��� = " << quotient(num1, num2);
            cout << endl;
        }
        catch (int ex)
        {
            cout << "e!rror" << endl;
        }
    }
    return 0;
}
// �Լ� ����
int quotient(int first, int second)
{
    try {
        if (second == 0) {
            throw 0;
        }
   }
    catch(int e){
        cout << "��������\n";
        throw;
    }
    return first / second;
}