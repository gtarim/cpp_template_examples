#include <iostream>

template <class T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main(int argc, char const *argv[])
{
    
    int x = 5, y = 7, z;
    
    z = getMax<int>(x,y);

    std::cout << "z = " << z << std::endl;

    return 0;
}
