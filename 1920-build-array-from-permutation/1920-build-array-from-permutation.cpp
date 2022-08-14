class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans={0};
        int n=nums.size();
       // int ans=new int[n]
        for(int i=0;i<n;i++)
        {
            nums[i]=n*(nums[nums[i]]%n)+nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]/=n;
        }
        return nums;
        
    }
};