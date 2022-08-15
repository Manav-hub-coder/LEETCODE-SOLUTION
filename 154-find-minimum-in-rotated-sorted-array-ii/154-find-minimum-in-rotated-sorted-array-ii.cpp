class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(start==end)
        {
            return nums[start];
        }
      
        while(start<=end)
        {
          
            while(nums[start]==nums[end]&&start!=end)
            {
                start++;
            }
            if(nums[start]<=nums[end])
            {
                return nums[start];
            }
              int mid=(end+start)/2;
            if(nums[mid]>=nums[start])
            {
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        return -1;
    }
};