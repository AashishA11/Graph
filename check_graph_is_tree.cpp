// quation   https://www.spoj.com/problems/PT07Y/
#include <bits/stdc++.h>
using namespace std;
const int n=100000;
vector<int>ar[n+1];
 int vis[n]={0};
 //int vis[n]={0};
void dfs(int v )
{
     
    vis[v]=1;
    //cout<<v<<"->"<<" ";
    for(int i=0;i<ar[v].size();i++)
     {
        int child=ar[v][i];
        if(vis[child]==0)
        dfs(child);    
     }  
     //for(int child:ar[v]) 
}
 
int main()
{
    
     int w;
     cin>>w;
    int edges;
    cin>>edges;
    int m=edges;
    while(edges--){
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    //for(int i=1;i<=n;i++)
     
    //dfs(ar[1][0]);
     //cout<<ar[1][0]<<endl;
    int cc = 0;
 
    for(int i=1;i<=w;i++)
    if(!vis[i])
    dfs(i), cc++;
     //cout<<cc<<m<<endl;
    if(cc==1 && m==w-1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}  