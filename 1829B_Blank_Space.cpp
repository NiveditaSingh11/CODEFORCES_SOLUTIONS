#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int count =0; int max_=0;

        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
                max_= max(count,max_);
            }

            else{
                count=0;
            }
        }
        cout<<max_<<endl;

    }
    return 0;
}