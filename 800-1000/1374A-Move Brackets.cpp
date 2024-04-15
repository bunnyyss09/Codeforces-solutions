#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,open,closed,ans;
        open=closed=ans=0;
        string str;
        cin >> n >> str;
        for(int i=0;i<n;i++){
            if(str[i]=='(' && str[i+1]==')'){
                i++;
                continue;
            }
            if(str[i]=='('){
                open++;
            }
            if(str[i]==')'){
                closed++;
                if(closed>open){
                    ans++;
                    closed--;
                }
            }
        }
        cout << ans << endl;
    }
}