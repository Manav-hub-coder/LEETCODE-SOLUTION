class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>runningsum(nums.size());
        if(nums.size()==0)
        {
            return runningsum;
        }
        int n=nums.size();
        runningsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            runningsum[i]=runningsum[i-1]+nums[i];
        }
        return runningsum;
    }
};