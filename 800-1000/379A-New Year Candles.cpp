#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,ans;
    cin >> a >> b;
    ans=a;
    while(a>=b){
        ans += (a/b);
        a = (a/b)+(a%b);
    }
    cout << ans;
}