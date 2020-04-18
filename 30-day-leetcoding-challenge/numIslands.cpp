class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
     int row = grid.size();
        if (row==0) return 0;
        int col = grid[0].size();
         
        int res=0;
         
        vector<vector<bool> > mark(row, vector<bool>(col,true));
         
        queue<int> q_row;
        queue<int> q_col;
         
        for (int i=0; i<row; i++){
            for (int j=0; j<col; j++){
                if (grid[i][j]=='1' && mark[i][j]){
                    q_row.push(i);
                    q_col.push(j);
                    mark[i][j] = false;
                    while (!q_row.empty()){
                        int ii = q_row.front();
                        int jj = q_col.front();
                         
                        if (ii+1<row && grid[ii+1][jj]=='1' && mark[ii+1][jj]){
                            q_row.push(ii+1);
                            q_col.push(jj);
                            mark[ii+1][jj] = false;
                        }
                        if (jj+1<col && grid[ii][jj+1]=='1' && mark[ii][jj+1]){
                            q_row.push(ii);
                            q_col.push(jj+1);
                            mark[ii][jj+1] = false;
                        }
                        if (ii-1 >=0 && grid[ii-1][jj]=='1' && mark[ii-1][jj]){
                            q_row.push(ii-1);
                            q_col.push(jj);
                            mark[ii-1][jj] = false;
                        }
                        if (jj-1>=0 && grid[ii][jj-1]=='1' && mark[ii][jj-1]){
                            q_row.push(ii);
                            q_col.push(jj-1);
                            mark[ii][jj-1] = false;
                        }
                         
                        q_row.pop();
                        q_col.pop();
                    }
                    res += 1;
                }
            }
        }
        return res;
    }
};
