#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fileio freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)

signed main(){
   // fileio;
   
     int t;
    cin>>t;
     
    while(t--){
         int a,b,c;
         
         cin>>a>>b>>c;
          int d=abs(a+b-2*c);
         int e=abs(b+c-2*a);
         int f=abs(c+a-2*b);
         int g=min(d,min(e,f));
          
         cout<<g<<endl;
          
}
  
  }  





























 