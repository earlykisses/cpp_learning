class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        int r=0,c=0;
        visited[0][0]=true;
        while(true){
            int nr=r,nc=c;
            switch(grid[r][c]){
                case 'L': --nc; break;
                case 'R' : ++nc;break;
                case 'U':--nr; break;
                case 'D':++nr;break;
            }
            if(nr<0|| nr>=m ||nc<0||nc>=n)
            break;
            if(visited[nr][nc])
            break;
            r=nr;
            c=nc;
            visited[r][c]=true;
        }
        return {r,c};
    }
};