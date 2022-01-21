#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,b;
    cin>>a>>b>>n;
    if(a<b)
        swap(a,b);
    while(b!=0){
        int val=a%b;
        if(n>a){
            cout<<"NO \n";
            return;
        }
        if((n-val)%b==0){
            cout<<"YES \n";
            return;
        }
        a=b;
        b=val;
    }
    cout<<"NO \n";
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}