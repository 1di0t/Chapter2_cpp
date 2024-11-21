#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"
#include "pokemon.h"

// ������
template<typename T>
Stack<T>::Stack(int cap)
    : capacity(cap), size(0)
{
    ptr = new T[capacity];
}
// �Ҹ���
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push �Լ�
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        throw out_of_range("������ ������ϴ�");
    }
}
// pop �Լ�
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else
    {
        //cout << "������ �� ������ �� �����ϴ�." << endl;
        //assert(false);
        throw overflow_error("������ �� ������ �� �����ϴ�.");
    }
}
template<typename T>
int Stack<T>::get_capacity()
{
    return capacity;
}
#endif