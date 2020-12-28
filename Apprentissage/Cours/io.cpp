#include <iostream>
#include <fstream>
#include <vector>


int main()
{   /*
    //Writing to Files with ofstream
    //renommer fichier
    std::string filename;
    std::cin >> filename;

    std::ofstream file;
    file.open("hello.txt", std::ios::app);
    // std::ofstream file("hello.txt");
    //file << "hey";

    if(file.is_open())
    {
        std::cout << "success n00b\n";
    }

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name: names)
    {
        file << name << std::endl;
    }
    file.close();
    */

    // Reading from Files with ifstream
    std::ifstream file("tacos.txt");
    std::vector<std::string> names;
    std::string input;
    while(file >> input) //return file
    {
        names.push_back(input);
    }

    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }
    return 0;
}