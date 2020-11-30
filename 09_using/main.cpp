#include <iostream>
#include <list>
#include <memory>

template<typename T>
class MyAlloc : public std::allocator<T> {};

template<typename T>
using MyAllocList = std::list<T, MyAlloc<T>>;

template<typename T>
struct MyAllocList2{
    typedef std::list<T, MyAlloc<T>> type;
};

int main()
{
    MyAllocList<int> a;
    typename MyAllocList2<int>::type b;

    std::cout << "hello" << std::endl;
    return 0;
}
