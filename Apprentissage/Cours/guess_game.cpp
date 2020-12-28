#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int guess_count){
    std::ifstream input("best_score.txt");
    if(!input.is_open())
    {
        std::cout << "unable to read file\n" << std::endl;
       
    }
    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if(!output.is_open())
    {
        std::cout << "unable to read file\n" << std::endl;
       
    }
    else if(guess_count < best_score)
    {
        output << guess_count;
    }
    else
    {
        output << best_score;
    }
}

void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++){
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}

void print_vector(std::vector<int>  data)
{
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

void play_game()
{
    //int guesses[251];
    int guess_count = 0;
    std::vector <int> guesses;
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";
    while(true)
    {
        int guess;
        std::cin >> guess;
       // guesses[guess_count] = guess;
       // guess_count++;
        guess_count++;
        guesses.push_back(guess) ;

        if(guess == random)
        {
            std::cout << "you win! \n";
            break;
        }else if(guess < random){
            std::cout << "Too low\n";
        }else{
            std::cout << "Too high\n";
        }
    }
    //print_array(guesses, guess_count);
    save_score(guess_count);
    
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0.Quit" << std::endl << "1.Play Game\n";
        std::cin >> choice;
    
    
    
        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    } 
    while(choice != 0);

}