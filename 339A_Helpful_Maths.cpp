#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;

    string num ="";

    for (int i=0;i<str.length();i++){
        if( str[i] != '+'){
            num += str[i];
        }
    }

    sort(num.begin(), num.end());
    for (int i=0;i<num.length();i++){
        cout<<num[i];
        if(i != (num.size() -1)){
            cout<<"+";
        }
    }

    return 0;
}