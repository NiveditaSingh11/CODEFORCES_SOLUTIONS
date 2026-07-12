#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n,w;
    cin>>k>>n>>w;

    int sum_paid =0;

    sum_paid = k*w*(w+1)/2;
    
    cout<< max(0,sum_paid-n)<<endl;
    return 0;
}