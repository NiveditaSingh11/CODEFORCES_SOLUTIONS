#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0,d=0;
    for(int i=0;i<n;i++){
        int s;
        cin>>s;

        if(s==1) a++;
        else if(s==2) b++;
        else if(s==3) c++;
        else d++;
    }

    int taxis = d;

    taxis += c;
    a= max(0,a-c);

    taxis += b/2;
    if(b%2 == 1){
        taxis+=1;
        a= max(0, a-2);
    }

    if(a>0){
        taxis += (a+3)/4;
    }

    cout<<taxis<<endl;
    return 0;

}

// mouse , if wishes could kill sound of magic my deskmate 