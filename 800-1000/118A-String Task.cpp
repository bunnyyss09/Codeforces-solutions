#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    array<char,6> arr={'a','e','i','y','o','u'};
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i=0;i<str.size();i++){
        if(find(arr.begin(),arr.end(),str[i])==arr.end()){
            cout << '.' << str[i];
        }
    }
}