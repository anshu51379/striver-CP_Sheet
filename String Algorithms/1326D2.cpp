// https://codeforces.com/contest/1326/problem/D2

#include<bits/stdc++.h>
using namespace std;
int kmpAlgo(string a){
    vector<int> tmp(a.size(), 0);
    for(int i=1; i<(int)tmp.size(); i+=1){
        int iPrev=tmp[i-1];
        while(iPrev>0 and a[i]!=a[iPrev]){
            iPrev=tmp[iPrev-1];
        }
        if(a[i]==a[iPrev]){
            tmp[i]=iPrev+1;
        }else{
            tmp[i]=iPrev;
        }
    }
    return tmp[tmp.size()-1];
}
int largestPalindrome(string a){
    string b=a+"?";
    reverse(a.begin(), a.end());
    b+=a;
    return kmpAlgo(b);
}
void solution(){
    string s;
    cin>>s;
    int n=s.size();
    int len=0, i=0, j=n-1;
    while(i<j){
        if(s[i]==s[j]){
            len+=1;
        }else{
            break;
        }
        i+=1;
        j-=1;
    }
    string rem=s.substr(len, n-2*len);
    string ans=s.substr(0, len);
    if(rem.size()){
        int len1=largestPalindrome(rem);
        reverse(rem.begin(), rem.end());
        int len2=largestPalindrome(rem);
        if(len1>len2){
            reverse(rem.begin(), rem.end());
            ans+=rem.substr(0, len1);
        }else{
            ans+=rem.substr(0, len2);
        }
    }
    ans+=s.substr(n-len, len);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        solution();
    }
}
