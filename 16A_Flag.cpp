#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

  
    vector<string> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }



   for(int i=0;i<n-1;i++){
       if(arr[i][0]==arr[i+1][0]){
        cout<<"NO";
        return 0;
   }
}


   for(int i=0;i<n;i++){
    for(int j=1;j<m;j++){
        if(arr[i][j]!=arr[i][0]){
            cout<<"NO";
            return 0;
        }
    }
   }

   cout<<"YES";
    return 0;
}

