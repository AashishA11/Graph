#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
int In[100005];
int out[100005];
int timer;
bool dfs(int node,int par){
    vis[node]=1;
    In[node]=timer++;
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
    for(int child:ar[node])
    {
        if(vis[child]==0)
        {
            dfs(child,node);
        }  
    }

    out[node]=timer++;
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
    cout<<dfs(1,0)<<endl;


}