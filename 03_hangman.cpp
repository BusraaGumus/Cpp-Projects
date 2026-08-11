#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<cctype>

using namespace std;

int main(){
    srand(time(0));
    vector<string> ThemeNames = {"Fruits", "Vegetables", "Foods"};
    vector<string> Fruits = {"Apple", "Banana", "Cherry", "Strawberry", "Grapes", "Orange", "Watermelon", "Pineapple", "Mango", "Peach"};
    vector<string> Vegetables = {"Carrot", "Broccoli", "Cucumber", "Tomato", "Potato", "Lettuce", "Onion", "Eggplant", "Zucchini", "Spinach"};
    vector<string> Foods = {"Pizza", "Burger", "Lazania", "Noodle", "Kebap", "Sushie", "Doner", "Lahmacun", "Pide", "Sarma"};

    int RandomThemeIndex = rand() % + ThemeNames.size();
    string currentTheme = ThemeNames[RandomThemeIndex]; 

    string WordToGuess;
    if(currentTheme == "Fruits")
    {
        int randomIndex = rand()% + Fruits.size();
        WordToGuess = Fruits[randomIndex];
    }
    else if(currentTheme == "Vegetables")
    {
        int randomIndex = rand() % + Vegetables.size();
        WordToGuess = Vegetables[randomIndex];
    }
    else if(currentTheme == "Foods")
    {
        int randomIndex = rand() % + Foods.size();
        WordToGuess = Foods[randomIndex];
    }

    string guessedWord(WordToGuess.length(), '_');
    int chances = 6;
    string guessedLetters = "";

    cout << "=== HANGMAN GAME ===" << endl;
    cout << "Theme: " << currentTheme << endl;

    while( chances > 0 && guessedWord != WordToGuess)
    {
        // Mevcut durumu ekrana bas (Örn: _ a _ _ a)
        cout << "\nWord:";
        for( int i= 0; i< guessedWord.length(); i++)
        {
            cout << guessedWord[i] <<  " " ;
        }
        cout<<" \n ";

        cout << "\nGuess Left: " << chances << endl;
        cout << "Used Letters: " << guessedLetters << endl;
        cout << "Guess A Letter: ";

        char guess;
        cin >> guess;

        if(guessedLetters.find(guess) != string::npos)
        {
            cout << " U already tried this, try another letter." << endl;
            cout << "Theme: " << currentTheme << endl;
            continue;
        }

        guessedLetters += guess;
        guessedLetters += " ";

        bool found = false;
        for (int i =0; i < WordToGuess.length(); i++)
        {
            if (WordToGuess[i] == guess)
            {
                guessedWord[i] = guess; // Bildiği indeksteki tireyi harfe çevir
                found = true;
            }
        }

        if (found)
        { 
            cout << "U got one, keep going." << endl;
            cout << "Theme: " << currentTheme << endl;
        }
        else{
            cout << "=== HANGMAN GAME ===" << endl;
            cout << "Theme: " << currentTheme << endl;
            cout << "Wrong letter, try again !" << endl; 
            chances--;
        }
    }


    if (guessedWord == WordToGuess && chances >=0)
    {
        cout << "\nWord:";
        for( int i= 0; i< guessedWord.length(); i++)
        {
            cout << guessedWord[i] <<  " ";
        }
        cout << endl;
        cout << "Congratulations, You Got it! " << endl;
    }
    else{
    cout<< "Game Over, U Lost Baby Girl." << endl;
    cout<< "Word: "<< WordToGuess<<endl;
    }

    return 0;
}