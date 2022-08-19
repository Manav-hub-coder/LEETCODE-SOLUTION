class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums(nums1);
        nums.insert(nums.end(),nums2.begin(),nums2.end());
        sort(nums.begin(),nums.end());
        int n=nums.size();
        double median=0.0;
        int mid=n/2;
        if(n%2==0)
        {
            median=double(nums[mid-1]+nums[mid])/2;
        }
        else{
            median=nums[mid];
        }
        return median;
    }
};