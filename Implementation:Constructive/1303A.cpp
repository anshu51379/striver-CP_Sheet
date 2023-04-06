// https://codeforces.com/problemset/problem/1303/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s;
        cin>>s;
        int low=0, high=0, count=0;
        for(int i=0; i<s.size(); i+=1){
            if(s[i]=='1'){
                low=i;
                break;
            }
        }
        for(int i=s.size(); i>0; i-=1){
            if(s[i]=='1'){
                high=i;
                break;
            }
        }
        for(int i=low; i<high; i+=1){
            if(s[i]=='0'){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
}
