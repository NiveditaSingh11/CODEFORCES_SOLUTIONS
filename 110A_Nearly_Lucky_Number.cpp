#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int count =0;
    for (char ch :n){
        if(ch=='4' || ch=='7'){
            count++;
        }
    }
    string ctn =to_string(count);
    bool lucky =true;

    for (char ch :ctn){
        if(ch!= '4' &&ch != '7'){
            lucky = false;
            break;
        }
    }
    if (lucky) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}