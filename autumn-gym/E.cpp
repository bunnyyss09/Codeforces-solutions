#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    while(n--){
        cin >>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        if(str=="yes"){
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }
    }
    return 0;
}