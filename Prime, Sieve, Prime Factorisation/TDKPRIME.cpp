// https://www.spoj.com/problems/TDKPRIME/

#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
bool isPrime[100000005];
int main(){
    for(int i=3; i<=10000; i+=2){
        if(isPrime[i]==0){
            for(int j=i*i; j<=100000000; j+=i+i){
                isPrime[j]=1;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=100000000;i+=2){
        if(isPrime[i]==0){
            prime.push_back(i);
        }
    }
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        cout<<prime[n-1]<<endl;
    }
}
