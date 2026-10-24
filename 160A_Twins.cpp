#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;

    vector<int> arr(n);
    int total =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total += arr[i];
    }
    sort(arr.begin() , arr.end() , greater<int>());
    int mySum =0;
    int count =0;

    for(int i=0;i<n;i++){
        mySum += arr[i];
        count++;

        if(mySum > total- mySum){
            break;
        }
    }

    cout<<count<<endl;
    return 0;
}