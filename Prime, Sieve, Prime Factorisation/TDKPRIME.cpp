// https://www.spoj.com/problems/TDKPRIME/

#include<bits/stdc++.h>
using namespace std;
int n=90000000;
bool prime[90000001];
vector<int> arr;
void sieve(){
	for(int i=2; i*i<=n; i++){
		if(prime[i]==false){
			for(int j=i*i; j<=n; j+=i){
				prime[j]=true;
			}
		}
	}
	for(int i=2; i<=n; i++){
		if(prime[i]==false){
		    arr.push_back(i);
		}
	}
}
int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
	sieve();
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		cout<<arr[n-1]<<endl;
	}
}
 
