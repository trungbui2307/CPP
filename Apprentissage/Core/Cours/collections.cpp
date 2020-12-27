#include <iostream>
#include <limits>
#include <vector>
#include <array>

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

void print_vector(std::vector<int> & data)
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

void print_stl_array(std::array<int, 20> &data, int size)
{
    for(int i = 0; i < size; i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    /*
    const int SIZE = 10;
    int guesses[SIZE];
    int size = sizeof(guesses) / sizeof(int);
    int cout = 0;
    std::cout << size << std::endl;
    //guesses[0] = 10;
    for(int i = 0; i < SIZE; i++){
       if(std::cin >> guesses[i])// return cin -> true of input worked
       {
           cout++;
           // input worked
       }else{
           //invalid character
           break;
       }
    }
    print_array(guesses,cout);
    std::cin.clear();
    //std::cin.ignore(10000, '\n');
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << std::endl;
    */
    //std::cin >> guesses[0];
    //std::cout << guesses[0] << std::endl;

    /* Vector
    std::vector<int> data = {1,2,3};
    //data.push_back(12);
    //std::cout << data[3] << std::endl;
    //std::cout << data[data.size() - 1] << std::endl;
    //data.pop_back(); //remove the last element
    std::cout << data.size() << std::endl;
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    for(int n:data)
    {
        std::cout << n << "\t";
    }
    */

    std::array<int, 20> data = {1,2,3};
    print_stl_array(data, 3);
    return 0;
}