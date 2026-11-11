#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if(x < 2) return false;

    for(long long i = 2; i * i <= x; i++) {
        if(x % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long x;
        cin >> x;

        long long root = sqrtl(x);

        if(root * root == x && isPrime(root))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}