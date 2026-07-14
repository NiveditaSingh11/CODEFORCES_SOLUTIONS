#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr(3);

    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    cout<< abs(arr[0]-arr[1])+abs(arr[2]-arr[1]);

    return 0;
}