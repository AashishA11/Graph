 
 
#include<bits/stdc++.h>
using namespace std;

 
#define MOD 1000000007
#define ll long long int
const int N = 1e5 + 5;
vector<int> ar[100];
vector<char> res;
int in[100];

void kahn(int n) {
     queue<int>q;
     for(int i=1;i<=n;i++)
        if(in[i]==0)
        q.push(i);

        while(!q.empty())
        {
            int cur=q.front();
            res.push_back(cur);
            q.pop();
            for(int i=0;i<ar[cur].size();i++)
            {
                int node=ar[cur][i];
                  in[node]--;
                  if(in[node]==0)
                  q.push(node);  
            }
        }
        cout<<"TopSort :";
        for(int node:res)
           {
            cout<<node<<" ";
        }
    
  }  
   
int main() {

    int n,m,x,y;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        ar[x].push_back(y);
        in[y]++;
    }
    kahn(n);

}

