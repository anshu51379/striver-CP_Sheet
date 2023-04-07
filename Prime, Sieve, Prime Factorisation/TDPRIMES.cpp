// https://www.spoj.com/problems/TDPRIMES/

#include<bits/stdc++.h>
using namespace std;
int a[8000000];
vector<bool> b(100000000, true);
int main(){
    long long n=100000000;
    long long i, j;
    b[1]=b[0]=false;
    for(i=4; i<=n; i+=2){
        b[i]=false;
        for(i=3; i*i<=n; i+=2){
            if(b[i]){
                for(j=i*i; j<=n; j+=(2*i)){
                    b[j]=false;
                }
           }
      }
      j=0;
      a[0]=2;
      for(i=3; i<=n; i+=2){
          if(b[i]){
              j+=1;
              a[j]=i;
          }
      }
    }
    for(i=1; i<=j; i+=100){
        cout<<a[i-1]<<endl;
    }
}
