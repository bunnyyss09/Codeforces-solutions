#include <iostream>
#include <string>
using namespace std;

int main(){
    int no_words;
    cin >> no_words;
    string word;
    
    for(int i=0;i<no_words;i++){
      cin >> word;
      int length= word.size();
      if(length>10){
        cout << word[0] << length-2 << word[length-1] << endl;
      }
      else
        cout << word <<endl;
    }
    return 0;
}