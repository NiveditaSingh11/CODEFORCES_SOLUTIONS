#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 

    int current =0;
    int maximum =0;

    for (int i=0;i<n;i++){
        int a ,b;
        cin>>a>>b;

        current =current -a;
        current =current+b;

        maximum =max(maximum,current);
    }

    cout<<maximum<<endl;
    return 0;
}