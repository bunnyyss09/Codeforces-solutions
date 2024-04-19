#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,one,two,three,four,ans=0;
    one=two=three=four=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==1){
            one++;
        } else if(arr[i]==2){
            two++;
        } else if(arr[i]==3){
            three++;
        } else{
            four++;
        }
    }
    ans += four;
    if(one>=three){
        ans += three;
        one -= three;
    } else{
        ans += three;
        one=0;
    }

    if((two%2==0) && (two!=0)){
        ans += (two*2)/4;
        ans += ceil(one/4.0);
    }else{
        ans += ceil((two*2+one)/4.0);
    }
    cout << ans;
    
    
}