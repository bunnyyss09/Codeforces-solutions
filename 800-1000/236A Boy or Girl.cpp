#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    transform(str.begin(),str.end(),str.begin(),::tolower);

    set<int> s;
    for(int i=0;i<str.size();i++){
        s.insert(int(str[i]));
    }

    if(s.size()%2==0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
}