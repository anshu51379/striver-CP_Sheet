// https://codeforces.com/problemset/problem/791/A

#include<bits/stdc++.h>
using namespace std;
int main() {
    int year=0;
	int limakWt, bobWt;
	cin>>limakWt>>bobWt;
	if(limakWt>bobWt){
	    year = 0;
	}else{
	    while(limakWt<=bobWt){
	        limakWt=3*limakWt;
	        bobWt=2*bobWt;
	        year = year + 1;
	    }
	}
	cout<<year<<endl;
	return 0;
}
