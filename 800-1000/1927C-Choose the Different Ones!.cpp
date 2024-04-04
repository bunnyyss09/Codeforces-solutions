#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k,count1,count2;
        count1=count2=0;
        cin >> n >> m >> k;
        set<int> set1,set2,ans;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            set1.insert(x);
        }
        for(int j=0;j<m;j++){
            int x;
            cin >> x;
            set2.insert(x);
        }
        for(auto element: set1){
            if(element <=k){
                ans.insert(element);
                count1++;
            }
        }
        for(auto element: set2){
            if(element <=k){
                ans.insert(element);
                count2++;
            }
        }
        
        if((count1>=k/2) && (count2>=k/2) && (ans.size()==k)){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}