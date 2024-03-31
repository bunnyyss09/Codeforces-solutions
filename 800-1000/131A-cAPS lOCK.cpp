#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int flag =1;
    for(int i=1;i<str.size();i++){
        if(islower(str[i])){
            flag =0;
        }
    }

    if(flag){
        for(int i=0;i<str.size();i++){
            if(islower(str[i])){
                str[i] =toupper(str[i]);
            } else{
                str[i] =tolower(str[i]);
            }
        }
        cout << str;
    } else{
        cout << str;
    }
    
}