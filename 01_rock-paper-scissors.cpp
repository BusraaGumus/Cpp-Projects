#include <iostream>
#include <cstdlib>// rand() ve srand() için
#include <ctime>   // time() için

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));

    int playerScore = 0;
    int computerScore = 0;
    int playerChoice, computerChoice =0;

    const string choises[3] = { "Rock", "Paper", "Scissors"};   // random choice for computer

    cout<< "-- Rock Paper Scissors --- "<< endl;

    while (true){
        cout<<"\n1. Rock"<< endl;
        cout<<"2. Paper"<< endl;
        cout<<"3. Scissors"<< endl;
        cout<<"4. Exit \n"<< endl;
        cout<<"Enter your choice: ";


        // Quick input validation for player choice
        if (!(cin >> playerChoice)){
            cout<<"Invalid input. Please enter a number between 1 and 4."<< endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if(playerChoice == 4){
            cout<<"Game Over !"<< endl;
            break;
        }

        if(playerChoice < 1 || playerChoice >4){
            cout<< " Invalid choice. Please select a number between 1 and 4."<< endl;
            continue;
        }

        // convert player choice to index (0, 1, 2)
        int playerIndex = playerChoice -1;
        computerChoice = rand() % 3;

        cout<<"\n You'r Choice: "<< choises[playerIndex]<<endl;
        cout<<"\n Computer's Choice: "<< choises[computerChoice]<<endl;

        if(playerIndex==computerChoice){
            cout<<"\n It's a tie!"<< endl;
        }
        else if((playerIndex==0 && computerChoice==2) || 
                (playerIndex==1 && computerChoice==0) || 
                (playerIndex==2 && computerChoice==1)){
            cout<<" You win!"<< endl;
            playerScore++;
        }
        else{
            cout<<"\n Computer wins!"<< endl;
            computerScore++;
        }
        cout<< "\n Your Score: "<< playerScore<< " Computer Score: "<< computerScore<<endl;

        if(playerScore == 3){
            cout<<"\n  You Won The Game !"<<endl;
            break;
        }
        else if(computerScore == 3 ){
            cout<<"\n Computer Won The Game !"<<endl;
            break;
        }

        

    }
return 0;
}