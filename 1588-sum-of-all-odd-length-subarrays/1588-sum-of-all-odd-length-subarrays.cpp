class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int total=0;
        for(int i=0;i<n;i++)
        {
            int start=i+1;
            int end=n-i;
            int ans=start*end;
            int odd=(ans+1)/2;
            total+=odd*arr[i];
        }
        return total;
    }
};