#include <iostream>
using namespace std;

// templete function
template <typename T, int N>//NonType
void print(T(&array)[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    char arr1[5] = { 65, 78, 66, 67, 68};
    
    print(arr1);
    return 0;
}