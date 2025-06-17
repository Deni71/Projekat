#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    if (n <= 1) {
        return 0;
    }

    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }

    for (unsigned int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 1) {
        cout << n;
    }

    cout << endl;
    return 0;
}
