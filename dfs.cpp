#include <bits/stdc++.h>
#include <iostream>
using namespace std;
const int N=1e5+10;
vector<int>ar[N];
int vis[N];
void dfs(int vertex){
    // take action on vertex after entering on the vertex
    vis[vertex]=1;
    for(int child:ar[vertex]){
         // take action on child before entering on the  child node
        if(vis[child]==0){
            dfs(child);
        }
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
    dfs(1);
    return 0;
}