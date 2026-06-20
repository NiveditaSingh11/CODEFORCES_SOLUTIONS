#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(4);
    for(int i=0;i<4;i++){
       cin>>arr[i];
    }
    bool triangle =false;
    bool segment=false;
    for(int i=0;i<4;i++){
        vector<int>side;
        for(int j=0;j<4;j++){
            if(j!=i){
                side.push_back(arr[j]);
            }
        }

        sort(side.begin(),side.end());
        if(side[0]+side[1]>side[2]){
            triangle=true;
        }

        else if(side[0]+side[1]==side[2]){
            segment=true;
        }
    }

    if(triangle){
        cout<<"TRIANGLE";
    }
    else if(segment){
        cout<<"SEGMENT";
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    return 0;
}