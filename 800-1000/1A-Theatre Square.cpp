#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,a,length,width,ans=1;
    cin >>n>>m>>a;
    length=width=a;
    while((n>length)||(m>width)){
        if(a==1){
            ans=n*m;
            break;
        }
        if(n>length){
            length =length+a;
            ans=ans+(width/a);
        }
        if(m>width){
            width =width+a;
            ans=ans+(length/a);
        }
    }
    cout << ans;
}