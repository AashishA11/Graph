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
    for(int child:ar[node])
    {
        if(vis[child]==0)
        {
            if(dfs(child,node)==true)
            return true;    
             
        }
        else
        if(child!=par)
         return true;   
        }

    return false;
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