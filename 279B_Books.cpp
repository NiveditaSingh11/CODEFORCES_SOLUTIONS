#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int left =0;
    int max_ =0;
    long long sum =0;

    for(int right =0;right<n;right++){
        sum+= arr[right];

        while(sum>t){
            sum -= arr[left];
            left++;
        }

        max_= max(max_ , right-left+1);
    }
    cout<<max_<<endl;
    return 0;
}