#include <iostream>

//Function Templates
template <typename T> void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}

template <typename T> void swap(T a[], T b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
// Pass by Reference and Pass by Value
/*
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}
*/
//Function Overloading
/*
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb: " << b << "\n";
}
*/
/*
void swap(std::string &a, std::string &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}
*/
int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    std::cout << "a: " << a << "\tb: " << b << "\n";
    std::string first_name = "Caleb";
    std::string last_name = "Curry";

    swap(first_name, last_name);
    std::cout << first_name << " " << last_name <<
    std::endl;
    

    int const SIZE = 6;
    int nines[] = {9,9,9,9,9,9};
    int ones[] = {1,1,1,1,1,1};

    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";
    swap(nines, ones, SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        std::cout << nines[i] << " " << ones[i] << "\t";
    }
    std::cout << "\n\n";
    return 0;
}