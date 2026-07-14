#include <bits/stdc++.h>
using namespace std;
int main(){

    string str;
    getline(cin , str);

    set<char> s;

    for(char ch :str){
        if(ch >= 'a' && ch <= 'z'){
            s.insert(ch);
        }
    }

    cout<<s.size();{}
    return 0;
}