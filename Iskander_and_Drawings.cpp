#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;


        string s;
        cin>>s;
        int ans=0;
        int count=0;
        for (int i=0;i<n;i++){
            if(s[i]=='#'){
                count++;
            }
            else{
                ans=max(ans,(count+1)/2);
                count=0;
            }
        }

        ans=max(ans,(count+1)/2);

        cout<<ans<<endl;
    }
    return 0;
}