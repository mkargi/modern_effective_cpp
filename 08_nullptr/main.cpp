#include <iostream>
#include <mutex>

template<typename MuxType>
using MuxGuard = std::lock_guard<MuxType>;

template< typename FuncType,
          typename MuxType,
          typename PtrType>
auto lockAndCall( FuncType func
                , MuxType& mutex
                , PtrType ptr ) -> decltype( func(ptr) )
{
    MuxGuard<MuxType> g(mutex);
    return func( ptr );
}

int* f( int* a )
{
    return nullptr;
}

int main()
{

    std::mutex m1;
    lockAndCall( f, m1, nullptr );
    std::cout << "hello world" << std::endl;
    return 0;
}
