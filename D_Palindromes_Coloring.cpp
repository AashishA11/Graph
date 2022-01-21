#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       int ans=0;
    map< char, int > mp;
     
     for(int i=0;i<n;i++){        
       mp[s[i]]++;    
   }
   int n1=0,n2=0;
   for(auto it:mp){
      if((it.second)%2==1){
         n2=(it.second/2);
         n1++;
      }
      else{
         n2+=(it.second/2);
      }
   }
     
     
}
     

}

