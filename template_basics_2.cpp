#include <iostream>

template <typename T>
class Array
{
private:
    T* ptr;
    int size;
public:
    Array(T arr[], int s);
    void print();
};

template <typename T>
Array<T>::Array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = arr[i];
    }
}

template <typename T> 
void Array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "ptr[i] = " << ptr[i] << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {10,5,8,11,2};
    Array<int> arrayTemplate(arr,5);

    arrayTemplate.print();


    return 0;
}
