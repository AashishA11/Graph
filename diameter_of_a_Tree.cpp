 #include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
 vector<int>ar[100001];
 int vis[100001]={0};
  int maxD,maxN;
int dfs(int node,int d)
{
     
    vis[node]=1;
     if(d>maxD)
      maxD=d,maxN=node;  
    for(int i=0;i<ar[node].size();i++)
     {
        int child=ar[node][i];
        if(vis[child]==0)
        {  
            dfs(child,d+1);  
        }  
         
     }  
      
}
 
int main()
{  
     int n,a,b;
      
         cin>>n;
         int m=n-1;
          while(m--){
            cin>>a>>b;
            ar[a].push_back(b);
            ar[b].push_back(a);
           } 
        maxD=-1;
        dfs(1,0);
        for(int i=1;i<=n;i++)
        vis[i]=0; 
        maxD=-1;
        dfs(maxN,0); 
        cout<<maxD<<endl;
}