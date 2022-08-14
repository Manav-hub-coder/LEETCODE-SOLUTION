class Solution {
public:
    int first(vector<int>&nums, int target)
    {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]<target)
                s=mid+1;
            else if(nums[mid]>target)
                e=mid-1;
            else
            {
                ans=mid;
                e=mid-1;
            }
        }
        return ans;
    }
    int last(vector<int>&nums, int target)
    {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]<target)
                s=mid+1;
            else if(nums[mid]>target)
                e=mid-1;
            else
            {
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) { 
        int result;
        int r2;
        result=first(nums,target);
        r2=last(nums,target);
        /* int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]<target)
                s=mid+1;
            else if(nums[mid]>target)
                e=mid-1;
            else
            {
                ans=mid;
                e=mid-1;
            }
        }*/
        return {result,r2};
    }
};