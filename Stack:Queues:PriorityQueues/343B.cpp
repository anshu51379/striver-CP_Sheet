// https://codeforces.com/contest/343/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char> tmp;
    for(int i=0; i<str.size(); i+=1){
        if(tmp.empty()){
            tmp.push(str[i]);
            continue;
        }
        if(tmp.top()==str[i]){
            tmp.pop();
        }else{
            tmp.push(str[i]);
        }
    }
    if(tmp.empty()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
