#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
void dfs(int node){
    vis[node]=1;
    for(int child:ar[node]){
        if(vis[child==0]){
            dfs(child);
        }
    }
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