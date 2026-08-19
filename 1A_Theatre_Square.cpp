#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n,m,a;
    cin>>n>>m>>a;

    long long n_cover = (n+a-1)/a;
    long long m_cover =(m+a-1)/a;

    long long ans =n_cover * m_cover;
    cout<<ans<<endl;
    

    return 0;
}