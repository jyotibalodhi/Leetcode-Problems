class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res(k);
        priority_queue<pair<int,int>> pq;
        int row= mat.size();
        int col=mat[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0) break;
                else{
                    if(j!=0)
                        mat[i][0]+=mat[i][j];
                }
            }
            pq.push(make_pair(mat[i][0],i));
            if(pq.size()>k)
                pq.pop();
        }
        int i=1;
        while(!pq.empty()){
            res[k-i]= pq.top().second;
            pq.pop();
            i++;
        }
        return res;
    }
};