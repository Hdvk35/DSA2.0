#include<bits/stdc++.h>
using namespace std;
vector<int>spiral(vector<vector<int>>&matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int>ans;
    if(m==0)
    return ans;
    vector<vector<bool>>visited(m,vector<bool>(n,false));
    int dr[] = {0,1,0,-1};
    int dc[] = {1,0,-1,0};

    int r=0;
    int c=0;
    int di =0;

    for(int i=0; i<m*n; i++){
        ans.push_back(matrix[r][c]);
        visited[r][c] = true;
        int nr = r + dr[di];
        int nc = c+ dr[di];
        if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[n][r]){
            r = nr;
            c = nc;
        }
        else{
            di = (di+1)%4;
            r = r + dr[di];
            c = c + dr[di];

        }
    }
    return ans;

}

int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{
        7,8,9}};
        vector<int>ans = spiral(matrix);
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<""<<endl;
        }
    
}

