class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>count;
        vector<int>k;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(auto it:count)
        {
            if(it.second==2)
                k.push_back(it.first);
        }
        
        return k;
    }
};