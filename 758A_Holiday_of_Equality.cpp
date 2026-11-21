#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    int maxi=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi= max(arr[i],maxi);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+= (maxi-arr[i]);
    }

    cout<<ans<<endl;
    return 0;
}