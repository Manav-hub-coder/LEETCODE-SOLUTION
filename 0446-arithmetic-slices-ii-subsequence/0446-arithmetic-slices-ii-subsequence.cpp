#define ll long long
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;
        vector<map<ll,int>>count(n);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                ll delta=(ll)nums[i]-(ll)nums[j];
                int sum=0;
                if(count[j].find(delta)!=count[j].end())
                {
                    sum=count[j][delta];
                }
                count[i][delta]+=sum+1;
                ans+=sum;
            }
        }
        return (int)ans;
    }
};