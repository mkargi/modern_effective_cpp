#include <iostream>
#include <tuple>

enum Color1{ red, white, blue};
enum class Color2{ red, white, blue, green };


template <typename E>
constexpr typename std::underlying_type<E>::type toUType( E enumerator ) noexcept
{
    return static_cast< typename std::underlying_type<E>::type>( enumerator );
}

int main()
{
    // example one
    Color1 color1 = white;
    //int white = 3; // not allowed
    Color2 color2 = Color2::green;
    int green = 2; // now allowed


    // example two
    enum Index{email, name, phone};
    enum class Index1{ email, name, phone };
    std::tuple<std::string, std::string, std::string> tup = std::make_tuple("myemail@web.de","matthia","07348");
    std::cout << std::get<email>( tup ) << std::endl;
    std::cout << std::get< static_cast<size_t>(Index1::email) >( tup )  << std::endl;
    std::cout << std::get< toUType(Index1::email) >( tup )  << std::endl;

    std::cout << white << std::endl;
    std::cout << Color1::white << std::endl;
    return 0;
}
