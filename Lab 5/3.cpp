#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q; int x;
    cout << "Enqueue: ";
    for (int i = 0; i < 5 && cin >> x; q.push(x), ++i);
    cout << "Dequeued: ";
    while (!q.empty()) cout << q.front() << " ", q.pop();
}
