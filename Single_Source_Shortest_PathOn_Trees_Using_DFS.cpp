// //quation https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
int dis[100005];
void dfs(int node,int d){
    vis[node]=1;
    dis[node]=d;
     
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
            dfs(child,dis[node]+1);
        }
    }
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
    dfs(1,0);
    int q;
    cin>>q;
    int ans=-1;
    int mi=INT_MAX;
    while(q--){
        int girl_city;
        cin>>girl_city;
        if(dis[girl_city]<mi){
            mi=dis[girl_city];
            ans=girl_city;
        }
        else{
            if(dis[girl_city]==mi&&girl_city<ans){
                ans=girl_city;
            }
        }
     }
 cout<<ans<<endl;     
}