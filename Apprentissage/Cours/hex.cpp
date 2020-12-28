#include <iostream>
#include <string>
int main()
{
    int number = 30; //thirty
    std::cout << number << std::endl;
    std::cout << std::oct << number << std::endl;
    std::cout << std::hex << number << std::endl;

    number = 0x30; // hexa number;
    std::cout << number << std::endl;

    int number1 = 030; // hexa number;
    std::cout << number1 << std::endl;
    
}