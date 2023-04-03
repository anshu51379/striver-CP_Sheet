// https://codeforces.com/problemset/problem/546/A

#include<bits/stdc++.h>
using namespace std;
int main() {
	int i, money, cost, need;
	long long count = 0;
	cin>>cost>>money>>need;
	for(i=1; i<=need; i++){
		count = count + (i*cost);
	}
	if(count<=money){
		cout<<0<<endl;
	}
	else cout << count - money <<endl;
	return 0;
}
