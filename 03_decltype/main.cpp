#include <iostream>
#include <vector>
#include <utility>

// c++11
template<typename Container, typename Index>
auto authAndAccess( Container& c, Index i )
    -> decltype( c[i] )
{
    return c[i];
}

template<typename Container, typename Index>
decltype(auto) authAndAccess2( Container&& c, Index i )
{
    return std::forward<Container>( c )[i];
}

std::vector<int> make_vec()
{
    std::vector<int> vec = {1,2,3};
    return vec;
}

int main()
{
    const int i=3;
    std::vector<int> vec = {1,2,3};
    authAndAccess( vec, 2 );
    authAndAccess2( make_vec(), 2 );

    return 0;
}
