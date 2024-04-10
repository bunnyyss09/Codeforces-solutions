#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,pos=1;
    cin >> n >> t;
    int arr[n];
    arr[0]=1;

    for(int i=1;i<n;i++){
        cin >> arr[i]; 
    }
    while(pos<t){
        if((1 <= arr[pos]) && (arr[pos] <= (n-pos))){
            pos=pos+arr[pos];
        }
        else{
            break;
        }
    }
    if(pos==t){
        cout << "YES";
    }else{
        cout << "NO";
    } 
}