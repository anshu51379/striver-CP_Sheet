//https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    bool flag=true;
    for(int i=0; i<inp.size(); i+=1){
        if(inp[0]=='9' and flag==true){
            flag=false;
            continue;
        }
        if(inp[i]-'0'<=4){
            continue;
        }
        int x=9-(inp[i]-'0');
        inp[i]=char(x)+'0';
    }
    cout<<inp<<endl;
}
