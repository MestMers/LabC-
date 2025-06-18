#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ars[n];
    for (int i = 0; i < n; i++) {
        cin >> ars[i];
    }
    for (int i = 0; i < n / 2; i++) {
        int re = ars[i];
        ars[i] = ars[n - 1 - i];
        ars[n - 1 - i] = re;
    }
    for (int i = 0; i < n; i++) {
        cout << ars[i] << " ";
    }

    return 0;
}