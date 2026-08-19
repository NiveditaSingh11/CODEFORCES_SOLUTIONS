#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;

    string team1 , team2;
    int count1 =0,count2=0;

    cin >>team1;
    count1++;

    for(int i=1;i<n;i++){
        string s;
        cin>>s;

        if(s==team1){
            count1++;
        }
        else{
            team2 =s;
            count2++;
        }
    }
    if(count1<count2){
        cout<<team2;
    }
    else{
        cout<<team1;
    }
    return 0;
}