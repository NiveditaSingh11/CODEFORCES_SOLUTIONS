

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

        vector<int> freq(26,0);
        int ans=0;
        for(int i=0;i<n;i++){
            int index =s[i]-'A';

            if(freq[index]==0){
                ans+=2;
            }
            else{
                ans+=1;
            }

            freq[index]++;
        }

        cout<<ans<<endl;
    }

    return 0;
}