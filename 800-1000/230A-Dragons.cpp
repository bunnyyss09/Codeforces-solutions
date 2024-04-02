#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,n,flag=0;
    cin >> s >> n;
    vector<pair<int,int>> vec;

    while(n--){
        int x,y;
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end());
    for(auto &element: vec){
        if(s<=element.first){
            cout << "NO";;
            return 0;
        } else{
            s += element.second;
        }
    }
    cout << "YES";
}