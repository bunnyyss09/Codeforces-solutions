#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        int flag=1;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]==0){
                continue;
            }
            else if(arr[i]<0){
                flag=0;
                break;
            }
            arr[i+1] -=2*arr[i];
            arr[i+2] -=arr[i];
            arr[i]=0;
        }
        if(flag && (arr[n-1]==0) && (arr[n-2]==0)){
            cout << "Yes\n";
        }else{
            cout << "NO\n";
        }
    }

}