#include <bits/stdc++.h>
using namespace std;

int main(){
    int lw,bw,years;
    cin >> lw >> bw;

    years=0;
    while(true){
        if(lw>bw){
            cout << years;
            break;
        } else{
            lw *= 3;
            bw *= 2;
        }
        years++;
    }
}