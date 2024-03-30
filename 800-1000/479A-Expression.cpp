#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,arr[5];
    cin >> a >> b >> c;
    arr[0]=a+b*c;
    arr[1]=a*(b+c);
    arr[2]=a*b*c;
    arr[3]=(a+b)*c;
    arr[4]=a+b+c;
    int max=arr[1];
    
    for(auto &element :arr){
        if(element > max){
            max=element;
        }
    }
    cout << max;
}