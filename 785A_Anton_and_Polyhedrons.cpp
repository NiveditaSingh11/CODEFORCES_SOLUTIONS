#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >>n;

    map<string ,int> faces={
        {"Tetrahedron" ,4},
        {"Cube" ,6},
        {"Octahedron",8},
        {"Dodecahedron",12},
        {"Icosahedron",20}
    };

    int sum =0;
    string s;

    while(n--){
        cin>>s;
        sum += faces[s];
    }

    cout<<sum;
    return 0;
}