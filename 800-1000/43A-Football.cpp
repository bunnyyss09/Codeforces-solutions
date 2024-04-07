#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m=0;
    string ans;
    cin >> n;

    vector<string> vec;
    for(int i=0;i<n;i++){
        string x;
        cin >> x;
        vec.push_back(x);
    }
    
    for(auto x: vec){
        if(m < (count(vec.begin(),vec.end(),x))){
            m = count(vec.begin(),vec.end(),x);
            ans = x;
        }
    }
    cout << ans;
}
