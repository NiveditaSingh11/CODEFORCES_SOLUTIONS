#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin>>t;

    while(t--){
    long long a;
    long long b;
    long long c;

    cin>>a>>b>>c;

   long long op1 = abs(a-b);
   long long op2 = abs(a+c-b);

   cout<< max(op1 ,op2)<<endl;
    }

    return 0;

}