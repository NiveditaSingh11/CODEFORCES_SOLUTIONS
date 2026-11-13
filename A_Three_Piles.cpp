#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
         int sum = a + b + c;

    if (sum % 3 == 0) {
        int avg = sum / 3;

        if (min({a, b, c}) == avg - 1 &&
            max({a, b, c}) == avg + 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else {
        cout << "NO\n";
    }
    }
    return 0;
}