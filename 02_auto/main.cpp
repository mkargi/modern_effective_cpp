#include <iostream>

int main()
{
    auto x = 27; // int
    const auto cx = x; // const int
    const auto& rx = x; // const int&

    auto&& uref1 = x; // int&
    auto&& uref2 = cx; // const int&
    auto&& uref3 = 27; // int&&

    return 0;
}
