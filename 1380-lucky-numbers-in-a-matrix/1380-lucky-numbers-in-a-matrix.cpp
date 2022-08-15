class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
           vector<int>val;
        vector<vector<int>>column;
        for(int i=0;i<matrix[0].size();i++){
            vector<int>res;
            for(int j=0;j<matrix.size();j++){
                res.push_back(matrix[j][i]);
            }
            column.push_back(res);
            res.clear();
        }
        for(int i=0;i<matrix.size();i++){
            int mini=*min_element(matrix[i].begin(),matrix[i].end());
            for(int j=0;j<matrix[0].size();j++){
                int maxi=*max_element(column[j].begin(),column[j].end());
                if(matrix[i][j]==mini && matrix[i][j]==maxi){
                    val.push_back(matrix[i][j]);
                }
            }
        }
        return val;
    }
};