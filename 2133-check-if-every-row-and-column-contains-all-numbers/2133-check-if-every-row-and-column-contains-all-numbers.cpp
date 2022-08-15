class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
     int n=matrix.size();
     vector<int>ans1(n+1,0);
        vector<int>ans2(n+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans1[matrix[i][j]]++;
                ans2[matrix[j][i]]++;
            }
            for(int k=1;k<=n;k++)
            {
                if(ans1[k]!=i+1)
                    return false;
                if(ans2[k]!=i+1)
                    return false;
            }
        }
        return true;
    }
};