#include<iostream>
#include<string>
#include<vector>
#include<random>
#include<cctype>

using namespace std;

int main(){
    srand(time(0));
    vector<string> ThemeNames = {"Fruits", "Vegetables", "Foods"};
    vector<string> Fruits = {"Apple", "Banana", "Cherry", "Stawberry", "Grapes", "Orange", "Watermelon", "Pineapple", "Mango", "Peach"};
    vector<string> Vegetables = {"Carrot", "Broccoli", "Cucumber", "Tomato", "Potato", "Lettuce", "Onion", "Eggplant", "Zucchini", "Spinach"};
    vector<string> Foods = {"Pizza", "Burger", "Lazania", "Noodle", "Kebap", "Sushie", "Döner", "Lahmacun", "Pide", "Sarma"};

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
}