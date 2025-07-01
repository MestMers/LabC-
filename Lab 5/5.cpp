#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;
    cout << "Push front: 10\n"; d.push_front(10);
    cout << "Push back: 20\n"; d.push_back(20);
    cout << "Push front: 5\n"; d.push_front(5);

    cout << "Deque contains: ";
    for (int i : d) cout << i << " ";
    cout << "\nPop back: " << d.back() << endl; d.pop_back();
    cout << "Pop front: " << d.front() << endl; d.pop_front();

    cout << "Remaining: ";
    for (int i : d) cout << i << " ";
}

