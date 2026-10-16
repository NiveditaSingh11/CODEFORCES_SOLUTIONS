#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >>n;

        string s;
        cin>>s;

         int totalOnes = count(s.begin(),s.end(),'1');
        if(s[0]=='1'){
           cout<<n-totalOnes<<endl;
           continue;
        }


       
        int onesLeft =0;
        int ans = totalOnes;
        for (int i=0;i<n;i++){
             if(s[i]=='1'){
                int onesBefore = onesLeft;

                int zeroAfter =(n-i-1) -(totalOnes-onesLeft-1);
                int operations = onesBefore+zeroAfter;

                ans = min(ans , operations);

                onesLeft++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;

}