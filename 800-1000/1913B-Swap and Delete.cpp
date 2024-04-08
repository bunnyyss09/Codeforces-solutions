#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string str,temp="";
        cin >> str;
        int zeros,ones,count=0;
        zeros=ones=0;

        if(str.size()==1){
            cout << 1<< endl;
            continue;
        }
        
        for(int i=0;i<str.size();i++){
            if(str[i]=='1'){
                ones++;
            }else{
                zeros++;
            }
        }
        if(zeros==ones){
            cout << 0 << endl;
            continue;
        }
        for(int i=0;i<str.size();i++){
            if(str[i]=='0' && (ones>0)){
                temp.append("1");
                ones--;
            }else if(str[i]=='1' && (zeros>0)){
                temp.append("0");
                zeros--;
            }else{
                cout << str.size()-temp.size() << endl;
                break;
            }
        }
        
    }
}