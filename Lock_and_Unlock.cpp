#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        if(arr[0]==arr[n-1]){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long median = arr[n/2];
        long long min_cost=0;

        for(int i=0;i<n;i++){
            min_cost += abs(arr[i]-median);
        }
        long long min_ops=arr[n-1]-arr[0];
        cout<<min_cost<<" "<<min_ops<<endl;
    }
    return 0;
}