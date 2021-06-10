  //  subtree_size_using_dfs
#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 vector<int>ar[100001];
 int vis[100001]={0};
int dis[100001];
void bfs(int srcn)
{
     queue<int>q;
     q.push(srcn);
     vis[srcn]=1;
     dis[srcn]=0;
     
     while(!q.empty())
      {
        int curt=q.front();
        q.pop();
        
       
    for(int i=0;i<ar[curt].size();i++)
     {
        int child=ar[curt][i];
        if(vis[child]==0)
        { 
           q.push(child);
           dis[child]=dis[curt]+1;
           vis[child]=1;  
        }  
         
     }  
      
     } 
}
 
int main()
{  
     int t,n,m,a,b;
      cin>>t;
      while(t--){
         cin>>n>>m;
         for(int i=1;i<=n;i++)
          ar[i].clear(),vis[i]=0,dis[i]=0;  
          while(m--){
            cin>>a>>b;
            ar[a].push_back(b);
            ar[b].push_back(a);
           } 
        bfs(1);
        //for(int i=1;i<=n;i++)
        cout<<dis[n]<<endl;
       }  
}
      
 