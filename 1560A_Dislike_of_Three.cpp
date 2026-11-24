#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> liked;

    int num=1;
    while(liked.size() <1000){
        if(num%3 !=0 && num%10 !=3){
            liked.push_back(num);
        }
        num++;
    }

    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;
        cout<<liked[k-1]<<endl;
    }
    return 0;
}