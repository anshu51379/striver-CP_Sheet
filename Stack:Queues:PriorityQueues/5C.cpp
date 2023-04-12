// https://codeforces.com/contest/5/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    string inp;
    cin>>inp;
    stack<int> cnt;
    vector<int> dp(inp.size(), 0);
    int length=0, count=0;
    for(int i=0; i<inp.size(); i+=1){
        if(inp[i]=='('){
            cnt.push(i);
            continue;
        }
        if(cnt.empty()){
            continue;
        }
        int j=cnt.top();
        cnt.pop();
        if(j>=1){
            dp[i]=i-j+1+dp[j-1];
        }else{
            dp[i]=i-j+1;
        }
        if(dp[i]>length){
            length=dp[i];
            count=1;
        }else if(dp[i]==length){
            count+=1;
        }
    }
    if(length==0){
        cout<<0<<" "<<1<<endl;
    }else{
        cout<<length<<" "<<count<<endl;
    }
}
