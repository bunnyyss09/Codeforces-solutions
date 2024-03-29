#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int uppercount,lowercount;
    uppercount=lowercount=0;

    for(int i=0;i<str.size();i++){
        if(islower(str[i])){
            lowercount++;
        }
        else if(isupper(str[i])){
            uppercount++;
        }
    }

    if(lowercount >= uppercount){
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    else{
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    cout << str;
}