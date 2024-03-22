#include <iostream>
using namespace std;

int main(){
    int x,count{};
    cin >> x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin >> arr[i];
    }
    for(int i=0;i<x;i++){
        bool less=false,great=false;
        for(int j=0;j<x;j++){
            if(arr[i]>arr[j]){
                less=true;
            }
            if(arr[i]<arr[j]){
                great=true;
            }
        }
        if(less&&great)
                count++;
    }
    cout << count <<endl;
}