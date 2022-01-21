// https://leetcode.com/problems/number-of-islands/submissions/
// https://leetcode.com/problems/flood-fill/submissions/
// https://leetcode.com/problems/island-perimeter/
//


//https://leetcode.com/problems/pacific-atlantic-water-flow/
//https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
#include<bits/stdc++.h>
using namespace std;
bool vis[301][301];
 
void dfs(int i,int j,int inialColour,int newColour,vector<vector<int>>& image){
    int n=image.size();
    int m=image[0].size();
    if(i<0||j<0) return;
    if(i>=n||j>=m) return;
    if(image[i][j]!=inialColour) return;

    image[i][j]=newColour;
     dfs(i-1,j,inialColour,newColour,image);
     dfs(i+1,j,inialColour,newColour,image);
     dfs(i,j-1,inialColour,newColour,image);
     dfs(i,j+1,inialColour,newColour,image);

}
 vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
             int inialColour=image[sr][sc];
             if(inialColour!=newColor)
             dfs(sr,sc,inialColour,newColor,image);

             return image;
        }
int main()
{
    //int n, m;
     

}
void dfs(int i,int j,vector<vector<char>>& image){
    int n=image.size();
    int m=image[0].size();
    if(i<0||j<0) return;
    if(i>=n||j>=m) return;
    if(vis[i][j]) return;
    vis[i][j]=1;
    if(image[i][j]=='0') return;
     dfs(i-1,j,image);
     dfs(i+1,j,image);
     dfs(i,j-1,image);
     dfs(i,j+1,image);

}

int numIslands(vector<vector<char>>& image) {
        int count=0;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(vis[i][j]) continue;

                 count++;
                 dfs(i,j,image);
            }
        }
        return count;
}
