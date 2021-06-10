#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
int dfs(int node){
    vis[node]=1;
    //cout<<node<<" ";
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
            dfs(child);
        }
    }
}
int main() {
    
    int n,m;
    cin>>n>>m;
    int cc=0;
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
        //int cc=0;

    }
     for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                cc++;
            dfs(i);
             
            }    
        }
    cout<<cc<<endl;

}