//
//  main.cpp
//  sand
//
//  Created by Daniele Johannes Vaccari on 30.1.2021.
//

#include <iostream>
using namespace std;

bool game = true;


int guessesLeft = 6;
string word = "car";
char wordBody [16] = {};

//Prints out already guessed characters
void printOutWordBody(){
    for (int x = 0; x < word.length(); x++){
        cout << wordBody[x];
    }
    cout << endl;
}

//Lets player guess character and locates it to the right index
void guessCharacter(){
    char c;
    cin >> c;
    for (int x = 0; x < word.length(); x++){
        if (word[x] == c){
            wordBody[x] = c;
        }
    }
}


//Asks the player to enter a word that is used to play hangman
void wordSetter(){
    cout << "Please input your word:" << endl;
    cin >> word;
}
//Subtracts one from total guesses
void minusOneGuess(){
    guessesLeft -= 1;
}


//Checks if the word has the character or not
bool isThisCharacterInWord(char a){
    for(int x = 0; x < word.size(); x++){
        if(word[x] == a){
            return true;
        }
        
        }
        return false;
    }
int main() {
    guessCharacter();
    guessCharacter();
    guessCharacter();
    printOutWordBody();
    return 0;
}

