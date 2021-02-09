//
//  main.cpp
//  sand
//
//  Created by Daniele Johannes Vaccari on 30.1.2021.
//

#include <iostream>
using namespace std;

string word = "car";

//Asks the player to enter a word that is used to play hangman
void wordSetter(){
    cout << "Please input your word:" << endl;
    cin >> word;
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
    int long num = 9999;
    int long *p = &num;
    
    cout << isThisCharacterInWord('r') << endl;
    
    return 0;
}

