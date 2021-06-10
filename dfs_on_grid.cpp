#include<bits/stdc++.h>
using namespace std;
bool vis[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int n,m;
bool isvalid(int x,int y){
    if(x<1||x>n||y<1||y>m)
        return false;
    if(vis[x][y]==true)
        return false;
    return true;
}
void dfs(int x,int y){
    vis[x][y]=1;
    cout<<x<<" "<<y<<endl;
    for(int i=0;i<4;i++){
        if(isvalid(x+dx[i],y+dy[i]))
            dfs(x+dx[i],y+dy[i]);
    }

}
/*
void dfs(int x,int y){
    vis[x][y]=1;
    if(isvalid(x-1,y))
    dfs(x-1,y);   
    if(isvalid(x,y+1))
    dfs(x,y+1); 
    if(isvalid(x+1,y))
    dfs(x+1,y); 
    if(isvalid(x,y-1))
    dfs(x,y-1);  
}
 
 */
int main()
{
    //int n, m;
    cin>>n>>m;
 
    dfs(1,1);

}