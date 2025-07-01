#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s; int x;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5 && cin >> x; s.push(x), ++i);
    cout << "Stack (Top to Bottom): ";
    while (!s.empty()) cout << s.top() << " ", s.pop();
}

