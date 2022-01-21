#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+10;
vector<int>g[N];
int depth[N],height[N];
void dfs(int node,int par){
     
    for(int child:g[node]){
        if(child==par) continue;
        
        depth[child]=depth[node]+1;
        dfs(child,node);
        height[node]=max(height[node],height[child]+1);
    }
}
signed main() {
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    dfs(1,0);
    for(int i=0;i<=n;i++){
        cout<<height[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<=n;i++){
        cout<<depth[i]<<" ";
    }
    cout<<endl;

}

