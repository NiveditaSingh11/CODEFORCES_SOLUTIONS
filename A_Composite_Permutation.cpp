#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n < 4) {
        cout << -1 << "\n";
        return;
    }

    if (n == 4) {
        cout << "4 3 2 1\n";
        return;
    }

    if (n == 5) {
        cout << "4 5 3 1 2\n";
        return;
    }

    // For n >= 6:
    // Start with [4, 3, 2, 1] for 1..4 (products: 4, 6, 6, 4 - all composite, no fixed points)
    vector<int> p(n + 1);
    p[1] = 4;
    p[2] = 3;
    p[3] = 2;
    p[4] = 1;

    // Pair remaining elements 5..n so p[i] != i and i * p[i] >= 30 (always composite)
    int i = 5;
    while (i + 1 <= n) {
        p[i] = i + 1;
        p[i + 1] = i;
        i += 2;
    }
    // If n is odd, swap the last element with n-1 to form a 3-cycle (n-2, n-1, n)
    if (i == n) {
        p[n] = n;
        swap(p[n - 1], p[n]);
    }

    for (int j = 1; j <= n; ++j) {
        cout << p[j] << (j == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}