class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        k--;
        for(auto i:arr)
        {
            if(mp[i]==1)
            {
                if(k==0)
                {
                    return i;
                }
                k--;
            }
        }
        return "";
    }
};