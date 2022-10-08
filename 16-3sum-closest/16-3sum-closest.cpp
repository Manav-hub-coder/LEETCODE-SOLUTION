class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum;
        int tsum=nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<n;i++)
        {
            int l=i+1;
            int h=n-1;
            while(l<h)
            {
                sum=nums[i]+nums[l]+nums[h];
                 while(l<h){
                int sum = nums[i]+nums[l]+nums[h];
                if(sum>target) h--;
                else l++;
                if(abs(sum-target)<abs(tsum-target)) tsum = sum;
            }
            }
        }
        return tsum;
    }
};