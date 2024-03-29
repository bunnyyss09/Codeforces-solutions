#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    set<int> s;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    if(str.size()>=26){
        for(auto element:str){
            s.insert(int(element));
        }
    } else{
        cout << "NO" << endl;
        return 0;
    }
    if(s.size()==26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}