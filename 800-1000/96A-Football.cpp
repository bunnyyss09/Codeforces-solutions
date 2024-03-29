#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count =1;

    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            count++;
            if(count >= 7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            count=1;
        }
    }
    cout << "NO" << endl;

}