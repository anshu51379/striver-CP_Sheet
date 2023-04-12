// https://codeforces.com/problemset/problem/271/D

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string inp, badOne;
    cin>>inp>>badOne;
    set<pair<int, int>> st;
    int maxBad; cin>>maxBad;
    for(int i=0; i<inp.size(); i+=1){
        int mod=1000000007;
        int hash1=0, hash2=0;
        int tmp1=31, tmp2=29, pow1=1, pow2=1, badCount=0;
        for(int j=i; j<inp.size(); j+=1){
            if(badOne[inp[j]-'a']=='0'){
                badCount+=1;
            }
            if(badCount>maxBad){
                break;
            }
            hash1=(hash1+(inp[j]-'a'+1)*pow1)%mod;
            hash2=(hash2+(inp[j]-'a'+1)*pow2)%mod;
            pow1=(pow1*tmp1)%mod;
            pow2=(pow2*tmp2)%mod;
            st.insert(make_pair(hash1, hash2));
        }
    }
    cout<<st.size()<<endl;
}
