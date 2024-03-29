#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,max_=1,ans=1;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i>0){
            if(arr[i]>=arr[i-1]){
                max_++;
                ans=max(ans,max_);
            }
            else max_=1;
        }
    }
    cout << ans;
}