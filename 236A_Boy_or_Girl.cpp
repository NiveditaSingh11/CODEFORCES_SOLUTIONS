#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<int> freq(26,0);
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a'] =1;
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(freq[i] == 1){
            count++;
        }
    }

    if((count % 2)==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}