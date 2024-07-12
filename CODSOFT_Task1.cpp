/*Create a program that generates a random number and asks the user to guess it.Provide feedback on whether the guess is too high or too low until the user guesses a correct number.*/
#include<iostream>
#include<cstdlib> //For std::rand() and std::srand()
#include<ctime> //For std::time()
using namespace std;
int main(){
    //Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    //Generate a random number between 1 and 100
    int randomnum=std::rand() %100 + 1;
    int userguess = 0;//Initialized userguess as zero
    std::cout<<"Can you guess the number that I have generated between 1 and 100?\n";
    //Loop until the user guesses the correct number
    while(true){
        std::cout<<"Enter your guess:";
        std::cin>>userguess;
                if(userguess>randomnum){
                std::cout<<"Oops!Too High!Keep Trying!\n";
                }
                else if(userguess<randomnum){
                std::cout<<"Oops!Too low! Keep Trying!\n";
                }
                else{
                std::cout<<"Congratulations!You guessed the correct number.\n";
                break;
                }
        }
    return 0;
}
