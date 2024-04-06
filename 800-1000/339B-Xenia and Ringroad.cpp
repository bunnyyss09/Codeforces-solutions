#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,time,initial=1;
    time=0;
    cin >> n >>m;
    for(long long int i=0;i<m;i++){
        long long int x;
        cin >> x;
        if(x>=initial){
            time += x-initial;
            initial = x;
        }else{
            time += n-initial+x;
            initial=x;
        }
    }
    cout << time;
}