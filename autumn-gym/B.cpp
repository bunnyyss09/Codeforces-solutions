#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    vector<int> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        int cafe;
        cin >>cafe;
        vec.push_back(cafe);
    }
    reverse(vec.begin(),vec.end());
    // Code for removing duplicates from a vector
    unordered_map<int, bool> seenElements;
    vector<int> uniqueVec;
    
    for (int num : vec) {
        if (!seenElements[num]) {
            uniqueVec.push_back(num);
            seenElements[num] = true;
        }
    }
    if (!uniqueVec.empty()) {
        std::cout << uniqueVec.back(); // Print the last element of uniqueVec
    }
    return 0;
    
}

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <bits/stdc++.h>
// int main() {
//     std::vector<int> vec = {1, 2, 2, 3, 4, 4, 5, 5, 6,4};
//     std::unordered_map<int, bool> seenElements;
//     std::vector<int> uniqueVec;
//     reverse(vec.begin(),vec.end());
//     for (int num : vec) {
//         if (!seenElements[num]) {
//             uniqueVec.push_back(num);
//             seenElements[num] = true;
//         }
//     }

//     // Now, uniqueVec contains only unique elements.
//     for (int num : uniqueVec) {
//         std::cout << num << " ";
//     }

//     return 0;
// }
