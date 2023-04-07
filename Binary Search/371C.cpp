// https://codeforces.com/contest/371/problem/C

#include<bits/stdc++.h>
using namespace std;
bool feasible(int i, int rB, int rS, int rC, int nB, int nS, int nC, int pB, int pS, int pC, int r){
    int nB_=rB*i-nB;
    int nS_=rS*i-nS; 
    int nC_=rC*i-nC;
    if(nB_<0){
        nB_=0;
    }
    if(nS_<0){
        nS_=0;
    }
    if(nC_<0){
        nC_=0;
    }
    int pB_=nB_*pB;
    int pS_=nS_*pS;
    int pC_=nC_*pC;
    int total=pB_+pS_+pC_;
    if(total<=r){
        return true;
    }else{
        return false;
    }
    
}
int main(){
    string method;
    cin>>method;
    int nB, nS, nC;
    cin>>nB>>nS>>nC;
    int pB, pS, pC;
    cin>>pB>>pS>>pC;
    int r;
    cin>>r;
    int rB=0, rS=0, rC=0;
    for(int i=0; i<method.size(); i+=1){
        if(method[i]=='B'){
            rB+=1;
        }else if(method[i]=='S'){
            rS+=1;
        }else if(method[i]=='C'){
            rC+=1;
        }
    }
    int ans=0;
    int left=0, right=1e14;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(feasible(mid, rB, rS, rC, nB, nS, nC, pB, pS, pC, r)==true){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout<<ans<<endl;
}
