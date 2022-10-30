class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            int n=nums[i];
            if((n>=10 and n<=99)|| (n>=1000 and n<=9999) || n==100000)
            {
                count++;
            }
        }
        return count;
    }
};