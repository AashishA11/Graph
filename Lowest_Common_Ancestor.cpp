#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+10;
vector<int>ar[N];
int par[N];
//int vis[N];
void dfs(int vertex,int p){
    // take action on vertex after entering on the vertex
    //vis[vertex]=1;
    par[vertex]=p;
    for(int child:ar[vertex]){
         // take action on child before entering on the  child node
         if(child==p) continue;

        dfs(child,vertex);
        
        // take action on child after exiting  child node

    }
    // take action on vertex before exiting the vertex
}
vector<int> path(int v){
    vector<int>ans;
    ans.push_back(v);
    while(v!=-1){
         ans.push_back(v);
         v=par[v];

    }
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){
int n,m;
    cin>>n>>m;
     
    while(m--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
 
    }
    dfs(1,-1);
    int x,y;
    cin>>x>>y;
    vector<int>px=path(x);
    vector<int>py=path(y);
    int mn_ln=min(px.size(),py.size());
    int lca=-1;
    for(int i=0;i<mn_ln;i++){
         if(px[i]==py[i]){
             lca=px[i];
         }
         else{
             break;
         }
    }
    cout<<lca<<endl;
    return 0;
}