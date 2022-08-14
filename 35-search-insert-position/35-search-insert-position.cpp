class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        if(target>nums[end])
            {
                return end+1;
            }
        else if(target<nums[start])
            {
                return 0;
            }
        else{
        while(start<end)
        {
            
            if(nums[start]==target)
            {
                return start;
            }
            else if(nums[start]<target)
            {
                start++;
            }
            else
            {
                end--;
            }
      }
        }
        return start;
    }
};