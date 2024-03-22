#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    if (n < 26) {
        cout << "NO" << endl;
    } else {
        set<char> letters;

        for (char c : str) {
            if (islower(c)) {
                letters.insert(c);
            }
        }
        if (letters.size() == 26) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
