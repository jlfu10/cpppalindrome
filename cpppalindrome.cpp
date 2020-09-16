
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
  char phrase[80];
  char modphrase[80];
  bool palindrome = true;
  int count = 0;
  cout << "enter a phrase: " << endl;
  cin.get(phrase, 80, '\n');
  cin.get();
  for(int i = 0;i < 80; i++){
    if((int(phrase[i]) >= 65 && int(phrase[i]) <= 95)||(int(phrase[i]) >= 97 && int(phrase[i]) <= 122)){
      modphrase[count] = phrase[i];
      count++;
    }
  }
  for(int i = 0; i < count; i++){
    if(modphrase[i] != modphrase[count-i-1]){
      palindrome = false;
    }
  }
  if(palindrome){
    cout << "palindrome!" << endl;
  }
  else{
    cout << "not palindrome!" << endl;
  }
  return 0;
}
