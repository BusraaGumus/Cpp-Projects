#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int numberToGuess = rand() %100 +1;
    int playerGuess= 0;
    while(true)
    {
        cout << "Guess A Number Between 1 and 100 : ";
        cin >> playerGuess;
        if(playerGuess< 1 || playerGuess>100)
        { cout << " Invalid answer. Please enter a number between 1 and 100." << endl; continue; }
        else if(playerGuess < numberToGuess)
        { cout << "Too low! Try again." << endl; continue; }
        else if(playerGuess > numberToGuess)
        { cout<<" Too high! Try again." << endl;   continue; }
        else
        { cout << "Congratulations, You Win!" << endl;   cout << "Number: "<< numberToGuess << endl;   break; }
    }
}