#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char phrase[80]; //initiated cstring to get input
    char modphrase[81]; //initiated modified cstring to only accept valid chars
    bool palindrome = true; //is the phrase a palindrome
    int count = 0; //for adding to modphrase
    cout << "enter a phrase: " << endl;
    cin.get(phrase, 80, '\n');
    cin.get();
    //gets phrase
    for (int i = 0; i < 80; i++) {
        if ((int(phrase[i]) >= 65 && int(phrase[i]) <= 95) || (int(phrase[i]) >= 97 && int(phrase[i]) <= 122)) {
            //is the phrase a valid character? if so, add it to modphrase
            if (int(phrase[i]) >= 65 && int(phrase[i]) <= 95) {
                phrase[i] += 32; //if the letter is uppercase, change it to lower case
            }
            modphrase[count] = phrase[i];
            count++;
        }
    }
    modphrase[count] = '\0';
    //loop through modphrase fowards and backwards and compare
    for (int i = 0; i < count; i++) {
      if (modphrase[count] != '\0'){
        if (modphrase[i] != modphrase[count - i - 1]) {
            palindrome = false; //if at any point characters are different, it is not a palindrome
        }
      }
    }
    //tell the user
    if (palindrome) {
        cout << "palindrome!!" << endl;
    }
    else {
        cout << "not palindrome!!" << endl;
    }
    return 0;
}
