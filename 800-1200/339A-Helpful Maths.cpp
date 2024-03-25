#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    multiset<int> s;

    for(int i=0;i<str.size();i++){
        if(str[i]=='+'){
            continue;
        } else{
            s.insert(str[i]-'0');
        }
    }

    int count=0;
    for(auto &element: s){
        ++count;

        if(count == s.size()){
            cout << element;
        } else{
            cout << element << "+";
        }

    }
}