class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
        {
            return 0;
        }
        int n=height.size();
        vector<int>lh(n);
        lh[0]=height[0];
        for(int i=1;i<n;i++)
        {
            lh[i]=max(height[i],lh[i-1]);
        }
        vector<int>rh(n);
        rh[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rh[i]=max(height[i],rh[i+1]);
        }
        int total=0;
        for(int i=1;i<n-1;i++)
        {
            total=total+min(lh[i],rh[i])-height[i];
        }
        return total;
    }
};