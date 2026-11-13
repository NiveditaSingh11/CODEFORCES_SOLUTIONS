#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int police =0;
    int untreated =0;

    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            if(police>0){
                police--;
            }
            else{
                untreated++;
            }
        }

        else{
            police +=arr[i];
        }
    }
    cout<<untreated<<endl;
    return 0;
}