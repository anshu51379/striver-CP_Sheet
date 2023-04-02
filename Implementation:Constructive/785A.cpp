// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    int ans=0;
    while(tc--){
        string inp;
        cin>>inp;
        if(inp=="Tetrahedron"){
            ans+=4;
        }
        if(inp=="Cube"){
            ans+=6;
        }
        if(inp=="Octahedron"){
            ans+=8;
        }
        if(inp=="Dodecahedron"){
            ans+=12;
        }
        if(inp=="Icosahedron"){
            ans+=20;
        }
    }
    cout<<ans<<endl;
}
