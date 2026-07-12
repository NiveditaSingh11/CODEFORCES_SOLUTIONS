#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int anton =0;
    int danik=0;

    for(char ch :s){
        if(ch == 'A'){
            anton++;
        }

        else if(ch =='D'){
            danik++;
        }
    }

    if(anton>danik){
        cout<<"Anton"<<endl;
    }

    else if(danik > anton ){
        cout<<"Danik";
    }

    else{
        cout<<"Friendship";
    }
    return 0;
}