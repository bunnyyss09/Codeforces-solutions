#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int moves=0;
    int I,J;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                I=i;
                J=j;
            }
        }
    }
    moves = abs(2 - I) + abs(2 - J);
    cout << moves;
}