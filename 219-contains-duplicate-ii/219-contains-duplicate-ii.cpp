class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>idx;
        for(int i=0;i<nums.size();i++)
        {
            if(idx.find(nums[i])!=idx.end())
            {
                int j=idx[nums[i]];
                if(abs(i-j)<=k)
                    return true;
            }
            idx[nums[i]]=i;
        }
        return false;
    }
};