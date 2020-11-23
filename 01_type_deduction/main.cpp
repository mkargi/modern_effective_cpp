#include <iostream>

// Paramtype is reference or pointer:
template<typename T>
void f1( T& param )
{

}

// Paramtype is universal reference:
template<typename T>
void f2( T&& param )
{

}

// Paramtype is no pointer or reference:
template<typename T>
void f3( T param )
{

}

int main()
{
    int x = 27;
    const int cx = x;
    const int& rx = x;

    // Case1: Paramtype is reference or pointer:
    f1(x);  // T is int&
    f1(cx); // T is const int&
    f1(rx); // T is const int&

    // Case2: Paramtype is universal reference:
    // Difference between LVal and RVal
    f2(x);  // LVal - T is int&
    f2(cx); // LVal - T is const int&
    f2(rx); // LVal - T is const int&
    f2(27); // RVal - T is int

    // Case3: Paramtype is no pointer or reference:
    f3(x);  // T is int
    f3(cx); // T is int
    f3(rx); // T is int

    return 0;
}
