#include <iostream>
#include <deque>
using namespace std;

int main() {
    string s; 
    cout << "Enter a word: ";
    cin >> s;
    deque<char> d(s.begin(), s.end());

    while (d.size() > 1 && d.front() == d.back())
        d.pop_front(), d.pop_back();

    cout << (d.size() <= 1 ? "It is a palindrome" : "It is not a palindrome");
}

