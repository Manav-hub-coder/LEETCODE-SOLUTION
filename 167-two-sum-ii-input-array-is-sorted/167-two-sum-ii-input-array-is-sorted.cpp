class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector<int>ans;
         int n=numbers.size();
        int start=0;
        int end=n-1;
        // if(start==end&&numbers[start]==target)
        // {
        //     return [start];
        // }
        // int n=numbers.size()
        // int start=0;
        // int end=n-1;
        while(start<end)
        {
            int sum=numbers[start]+numbers[end];
            int mid=(start+end)/2;
            if(sum==target)
            {
                return {start+1,end+1};
                // ans.begin()=start+1;
                // ans.end()=end+1;
            }
            if(sum>target)
            {
                end--;
            }
            else{
                start++;
            }
        }
        return {-1,-1};
    }
};