#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr;
    int x, val;
    
    // Read the array until newline or EOF
    while (cin >> x) {
        arr.push_back(x);
        if (cin.peek() == '\n') break;
    }
    
    cin >> val;  // value to find frequency of
    
    // 1. Count occurrences of val
    int count = count(arr.begin(), arr.end(), val);
    
    // 2. Find min and max elements
    int mn = *min_element(arr.begin(), arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    
    cout << "Count of " << val << ": " << count << "\n";
    cout << "Min: " << mn << "\n";
    cout << "Max: " << mx << "\n";
}


