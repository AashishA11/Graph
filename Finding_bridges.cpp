#include <bits/stdc++.h>
using namespace std;
int vis[100005];
int in[100005];
vector<int>ar[1000005];
int low[100005];
int timer;
int Find_bridges(int node,int par){
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child: ar[node]){
        if(child==par)
        continue;
        if(vis[child]==1)  
        {low[node]=min(low[node],in[child]);
            //child is a back_edge
        }
        else{
            Find_bridges(child,node);

            if(low[child]>in[node])
            cout<<node<<"->"<<child<<"is a bridge\n";
            low[node]=min(low[node],low[child]);
        }
    }
}
int main() {
  int n,m,x,y;
  cin>>n>>m;
  while(m--){
    cin>>x>>y;
    ar[x].push_back(y);
    ar[y].push_back(x);

  }
  Find_bridges(1,-1);
  return 0;
}