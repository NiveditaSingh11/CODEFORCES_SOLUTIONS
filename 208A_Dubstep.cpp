#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string word ="";
    string result = "";

    for(int i=0;i<s.length();i++){
        if(s.substr(i,3) == "WUB"){
            if(word != ""){
                if(result != ""){
                    result += " ";
                }
                result += word;
                word="";
            }
            i+=2;
        }
        else{
            word+= s[i];
        }
    }
    if(word!= ""){
        if(result != ""){
           result += " ";
        }
         result += word;
    }
    cout<<result<<endl;
    return 0;
}