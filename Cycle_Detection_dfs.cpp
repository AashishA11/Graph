#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
bool dfs(int node,int par){
    vis[node]=1;
    /*
    for(int i=0;i<ar[node].size();i++)
    {
        int child=ar[node][i];
        if(vis[child]==0)
        {
            dfs(child);
        }
    }
    */
   bool isLoopExists =false;
    for(int child:ar[node])
    {
        if(vis[child]==1&&child==par) continue;
        if(vis[child]) return true;   

        isLoopExists|=dfs(child,node);
        
    }
    return isLoopExists;
}
int main() {
    int n,m;
    cin>>n>>m;
     
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
         

    }
       bool isLoopExists =false;

     for(int i=1;i<=n;i++)
        {
            if(vis[i]) continue;
            if(dfs(i,0))
            {
              isLoopExists=true;
            }    
    }
    
   cout<<isLoopExists<<endl;
}