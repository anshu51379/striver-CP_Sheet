// https://codeforces.com/problemset/problem/116/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int enter, exit, max[10000]={0}, test, count=0;
    while(cin>>test){
        for(int i=0; i<test; i++){
            cin>>enter>>exit;
            count=count+exit-enter;
            max[i]=count;
        }
        sort(max,max+test);
        cout<<max[test-1]<<endl;
    }
}
