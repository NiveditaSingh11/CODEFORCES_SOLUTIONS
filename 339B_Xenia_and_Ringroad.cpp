#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m ;
    cin>> n>>m;

    int current =1;
    long long time =0;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;

        if(a<current){
           time += n-current +a; 
        }
        else{
            time += a-current;
        }

        current =a;
    }
    cout<<time<<endl;
    return 0;
}
//a represents the house number where Xenia needs to complete her next task.