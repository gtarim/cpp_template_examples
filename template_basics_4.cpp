#include <iostream>

// class template
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;
    Pair(T1 _first, T2 _second)
    {
        first  = _first;
        second = _second; 
    }
};

template <typename T1, typename T2>
T2 PairFunc(T1 first, T2 second)
{
    return (T2) first * second;
}

int main(int argc, char const *argv[])
{
    
    int x = 5;
    double y = 7.011;

    Pair<int,double> mpair(x,y);

    std::cout << "first = " << mpair.first << std::endl;
    std::cout << "second = " << mpair.second << std::endl;

    std::cout << "pair = " << PairFunc<int,double>(x,y) << std::endl;
    std::cout << "pair = " << PairFunc(x,y) << std::endl;


    return 0;
}
