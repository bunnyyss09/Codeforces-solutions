#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int> database;
    while(n--){
        string name;
        cin >> name;
        if(database.count(name)==0){
            cout << "OK" << endl;
            database[name]=0;
        }
        else{
            database[name]++;
            cout << name << database[name] << endl;
        }
    }
}