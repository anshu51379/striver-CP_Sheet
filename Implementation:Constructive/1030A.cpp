// https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int people; cin>>people;
    int choice;
    while(people--){
        cin>>choice;
        if(choice==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
}
