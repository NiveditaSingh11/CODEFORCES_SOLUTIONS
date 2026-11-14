#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int ans=0;
        char arr[10][10];

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];

                if(arr[i][j] =='X'){
                    ans += min({i,j,9-i,9-j}) +1;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}