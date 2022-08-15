class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        if(start==end)
        {
            return nums[start];
        }
        if(nums[start]<nums[end])
           {
             return nums[start];
           }
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(mid>0&&nums[mid]<nums[mid-1])
            {
                return nums[mid];
            }
            if(mid<nums.size()-1&&nums[mid]>nums[mid+1])
            {
                return nums[mid+1];
            }
            if(nums[start]<=nums[mid])
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
        
    }
};