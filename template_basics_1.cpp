#include <iostream>


template <typename T>
T sum(T x, T y)
{
    return x + y;
}


int main(int argc, char const *argv[])
{

    int a = 5, b = 7, c;
    c = sum(a,b);
    std::cout << "c = " << c << std::endl;

    return 0;
}
