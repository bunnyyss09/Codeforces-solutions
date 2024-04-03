#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int start,end,ans;
        start=end=1;
        for(int i=1;i<n;i++){
            if(arr[0]==arr[i]){
                start++;
            } else {
                break;
            }
        }
        for(int j=n-2;j>=0;j--){
            if(arr[n-1]==arr[j]){
                end++;
            } else {
                break;
            }
        }
        if(arr[0]==arr[n-1]){
            if((start+end)>=n){
                cout << 0 << endl;
            }
            else{
                ans=n-(start+end);
                cout << ans << endl;
            }
        } else {
            ans=n-max(start,end);
            cout << ans << endl;
        }
    }
}