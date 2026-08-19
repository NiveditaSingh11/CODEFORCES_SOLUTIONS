#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >>t;

  while(t--){
      
    int n;
    cin >>n;

    int count2=0;
    int count3=0;

    while (n%2 ==0){
        n/=2;
        count2 ++;
    }
    while(n%3==0){
        n /= 3;
        count3 ++;
    }

    if(n!=1){
        cout<<-1<<endl;
    }

    else if(count2 >count3){
        cout<<-1<<endl;
    }

    else if(count2 == count3){
        cout<<count2<<endl;
    }

    else{
        cout<< 2*count3 -count2<<endl;
    }
  }
    return 0;
}