#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tom_rank=1,tom_sum{},sum{};
    int english,german,math,history;
    cin >> english >> german >> math >> history;
    tom_sum=english+german+math+history;
    for(int i=0;i<n-1;i++){
        cin >> english >> german >> math >> history;
        sum = english+german+math+history;
        if(sum>tom_sum){
            tom_rank++;
        }
    }
    cout << tom_rank <<endl;
}