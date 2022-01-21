#include<bits/stdc++.h>
using namespace std;
 
vector<int>ar[10005];
vector<int>v;
int n;
 
int vis[10005];
void dfs(int node){
  vis[node]=1;
  if(v.size()==n+1)
  return;
else{
  for(int child:ar[node]){
    if(vis[child]==0){
       v.push_back(child);
      dfs(child);
      v.pop_back();
    }
  }
  }
}
int main(){
    //fileio;

    int t;
    cin>>t;
    while(t--){
        //int n;
        cin>>n;
         int a[n];
         for(int i=1;i<=n;i++)
          ar[i].push_back(i+1);
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==0)
            ar[i].push_back(n+1);
          else
            ar[n+1].push_back(i);
        }
        v.push_back(1);
        dfs(1);
        for(int i=0;i<n;i++)
          cout<<v[i]<<endl;

      }
    }