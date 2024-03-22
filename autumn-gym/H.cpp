#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> rooms(10, 0);  // Initialize 10 rooms as empty

    string str;
    cin >> str;

    for (int i = 0; i < n; i++) {
        if (str[i] == 'L') {
            for (int j = 0; j < 10; j++) {
                if (rooms[j] == 0) {
                    rooms[j] = 1;
                    break;
                }
            }
        } else if (str[i] == 'R') {
            for (int j = 9; j >= 0; j--) {
                if (rooms[j] == 0) {
                    rooms[j] = 1;
                    break;
                }
            }
        } else {
            int room_number = str[i] - '0';
            rooms[room_number] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << rooms[i];
    }

    return 0;
}

