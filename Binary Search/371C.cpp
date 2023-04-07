// https://codeforces.com/contest/371/problem/C

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    string method;
    cin>>method;
    int nB, nS, nC;
    cin>>nB>>nS>>nC;
    int pB, pS, pC;
    cin>>pB>>pS>>pC;
    int money;
    cin>>money;
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
    int left=0, right=money+200;
    while(left<=right){
        int tmp=0;
        int mid=left+(right-left)/2;
        int tB=max(rB*mid-nB, tmp);
        int tS=max(rS*mid-nS, tmp);
        int tC=max(rC*mid-nC, tmp);
        int price=tB*pB+tS*pS+tC*pC;
        if(price<=money){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout<<right<<endl;
}
