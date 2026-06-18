#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int main(){
    int Y;
    cin>>Y;
    int W;
    cin>>W;

    int m= max(Y,W);
    int num= 6-m+1;
    int den=6;
   int  g= __gcd(num,den);
 num /= g;
 den /=g;
 cout<<num<<"/"<<den<<endl;
    return 0;
}