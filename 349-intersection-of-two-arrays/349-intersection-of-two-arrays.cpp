class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        for(auto a:nums1)
        {
            for(auto b:nums2)
            {
                if(a==b)
                {
                   ans.insert(a); 
                }
            }
        }
        nums1.clear();
        for(auto a:ans)
        {
            nums1.push_back(a);
        }
        return nums1;
    }
};