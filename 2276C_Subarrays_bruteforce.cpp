#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n , k;
        cin>>n>>k;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long ans =0;

        for(int i=0;i<n;i++){
            long long sum =0;

            for(int j=i;j<n;j++){
                sum += arr[j];

                int len = j-i+1;

                if(len> k && sum %k ==0){
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}