#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+10;
vector<int>ar[N];
//int vis[N];
int even_ct[N];
int subtree_sum[N];
void dfs(int vertex,int par){
    // take action on vertex after entering on the vertex
    //vis[vertex]=1;
    if(vertex%2==0) even_ct[vertex]++;
    subtree_sum[vertex]+=vertex;
    for(int child:ar[vertex]){
         // take action on child before entering on the  child node
        if(child==par) continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
        even_ct[vertex]+=even_ct[child];
        // take action on child after exiting  child node

    }
    // take action on vertex before exiting the vertex
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
    dfs(1,0);
    for (int i = 1; i <=n; i++)
    {
        cout<<subtree_sum[i]<<" "<<even_ct[i]<<endl;
    }
    
    return 0;
}