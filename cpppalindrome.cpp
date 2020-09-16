#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
  char phrase[80];
  vector<char> modphrase;
  cout << "enter a phrase: " << endl;
  cin.get(phrase, 80, '\n');
  for(int i = 0;i < 80; i++){
    phrase[i].toupper();
    if(int(phrase[i]) >= 65 && int(phrase[i]) <= 90){
      modphrase.push_back(phrase[i]);
    }
  }
  for(auto x: modphrase){
    cout << x << endl;
  }
  return 0;
}
