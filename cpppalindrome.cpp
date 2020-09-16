#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
  char phrase[80];
  char modphrase[80];
  int moddex = 0;
  bool palindrome = true;
  cout << "enter a phrase: " << endl;
  cin.get(phrase, 80, '\n');
  for(int i = 0;i < 80; i++){
    if(int(toupper(phrase[i])) >= 65 && int(toupper(phrase[i])) <= 90){
      modphrase[moddex] = phrase[i];
      moddex += 1;
    }
  }
  for(int i = 0; i < moddex; i++){
    if(toupper(modphrase[i]) != toupper(modphrase[moddex-i-1])){
      cout << modphrase[i]<< modphrase[moddex-i-1] << endl;
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
