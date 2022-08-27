class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            int ans=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]>nums[i])
                {
                    ans=max(ans,dp[j]);
                }
            }
            dp[i]=1+ans;
        }
        return *max_element(dp.begin(),dp.end());
    }
};