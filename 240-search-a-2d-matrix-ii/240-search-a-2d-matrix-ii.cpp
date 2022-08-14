class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            int start=0;
            int end=col-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(matrix[i][mid]==target)
                    return true;
                else if(matrix[i][mid]<target)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        return false;
    }
};