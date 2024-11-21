#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"
#include "pokemon.h"

// 생성자
template<typename T>
Stack<T>::Stack(int cap)
    : capacity(cap), size(0)
{
    ptr = new T[capacity];
}
// 소멸자
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push 함수
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
        throw out_of_range("스택이 비었습니다");
    }
}
// pop 함수
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
        //cout << "스택이 비어서 삭제할 수 없습니다." << endl;
        //assert(false);
        throw overflow_error("스택이 비어서 삭제할 수 없습니다.");
    }
}
template<typename T>
int Stack<T>::get_capacity()
{
    return capacity;
}
#endif