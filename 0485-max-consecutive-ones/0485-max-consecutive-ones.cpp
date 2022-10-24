class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            if(nums[i]==0)
            {
                maxc=max(maxc,count);
                count=0;
            }
        }
        maxc=max(maxc,count);
        return maxc;
    }
};