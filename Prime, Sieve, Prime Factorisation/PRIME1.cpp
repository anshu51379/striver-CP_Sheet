// https://www.spoj.com/problems/PRIME1/cstart=10

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a){
    bool flag=true;
    double tmp=sqrt(a);
    for(int i=2; i<=tmp; i+=1){
        if(a%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int m, n;
        cin>>m>>n;
        for(int i=m; i<=n; i+=1){
            if(isPrime(i) and i>1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
