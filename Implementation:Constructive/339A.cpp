// https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp, ans;
    cin>>inp;
    for(int i=0; i<inp.size(); i+=1){
        if(inp[i]!='+'){
            ans.push_back(inp[i]);
        }
    }
    sort(ans.begin(), ans.end());
    cout<<ans[0];
    for(int i=1; i<ans.size(); i+=1){
        cout<<"+"<<ans[i];
    }cout<<endl;
}
