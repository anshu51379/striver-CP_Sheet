// https://codeforces.com/problemset/problem/1433/A

#include<bits/stdc++.h>
using namespace std;
int temp(int a){
    if(a==1){
        return 1;
    }else if(a==11){
        return 3;
    }else if(a==111){
        return 6;
    }else if(a==1111){
        return 10;
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int x;
        cin>>x;
        if(x==1 or x==11 or x==111 or x==1111){
            cout<<temp(x)<<endl;
        }else if(x==2 or x==22 or x==222 or x==2222){
            cout<<10+temp(x/2)<<endl;
        }else if(x==3 or x==33 or x==333 or x==3333){
            cout<<20+temp(x/3)<<endl;
        }else if(x==4 or x==44 or x==444 or x==4444){
            cout<<30+temp(x/4)<<endl;
        }else if(x==5 or x==55 or x==555 or x==5555){
            cout<<40+temp(x/5)<<endl;
        }else if(x==6 or x==66 or x==666 or x==6666){
            cout<<50+temp(x/6)<<endl;
        }else if(x==7 or x==77 or x==777 or x==7777){
            cout<<60+temp(x/7)<<endl;
        }else if(x==8 or x==88 or x==888 or x==8888){
            cout<<70+temp(x/8)<<endl;
        }else if(x==9 or x==99 or x==999 or x==9999){
            cout<<80+temp(x/9)<<endl;
        }
    }
}
