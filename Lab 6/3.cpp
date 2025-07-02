#include <iostream>
using namespace std;

string reverseStr(const string &s, int i = 0) {
    if (i >= s.size()) return "";
    return reverseStr(s, i + 1) + s[i];
}

int main() {
    string s; 
    getline(cin, s);
    cout << reverseStr(s);
}
