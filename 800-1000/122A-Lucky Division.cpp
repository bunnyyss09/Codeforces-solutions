#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0) {
        cout << "YES";
        return 0;
    } else {
        while (n > 0) {
            if (n % 10 == 4 || n % 10 == 7) {
                n = n / 10;
            } else {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}