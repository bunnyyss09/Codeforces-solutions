#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int size,points=0;
        cin >> size;

        string s;
        cin >> s;

        vector<char> vec;

        for(auto element: s){
            if(count(vec.begin(),vec.end(),element)==0){
                points +=2;
                vec.push_back(element);
            }
            else{
                points +=1;
            }
        }
        cout << points << endl;
    }

    return 0;
}