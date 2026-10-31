#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        int freq[26] = {0};

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        for (char c : t)
        {
            freq[c - 'a']--;
        }

        freq['s' - 'a']--;
        freq['i' - 'a']--;
        freq['x' - 'a']--;

        bool flag = true;

        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                flag=false;
                break;
            }
        }
        if(flag) {cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}