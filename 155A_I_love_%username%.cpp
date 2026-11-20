#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxScore =arr[0];
    int minScore = arr[0];

    int ans=0;

    for(int i=1;i<n;i++){
        if(arr[i]>maxScore){
            ans++;
            maxScore=arr[i];
        }

        if(arr[i]<minScore){
            ans++;
            minScore=arr[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}