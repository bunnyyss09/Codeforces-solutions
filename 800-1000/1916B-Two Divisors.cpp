#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin >> a >> b;
    if(lcm(a,b)!=b){
        cout << lcm(a,b) << endl;
    } else{
        cout << b*(b/a) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}