// quation  https://www.spoj.com/problems/BUGLIFE/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int>ar[100005];
int vis[100005];
int col[100005];
bool dfs(int node,int c){
    vis[node]=1;
    col[node]=c;
     
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
            if(dfs(child,c^1)==false)
            return false;
        }
        else
        if(col[child]==col[node])
        return false;    
    }
    return true;
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
    cout<<dfs(1,0)<<endl;


}