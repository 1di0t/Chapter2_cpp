#pragma once
#include <cstring>

// ���ø� �Լ� ����
template <typename T>
T smaller(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}

template<>
const char* smaller(const char* const& first, const char* const& second)
{
    if (strcmp(first, second) < 0)
    {
        return first;
    }
    return second;
}