class Solution {
public:
    int search(vector<int>& nums, int target) {
     int start=0;
     int end=nums.size()-1;
      /*  if(nums[0]==target)
        {
            return 0;
        }*/
     while(start<=end)
     {
         int mid=(start+end)/2;
         if(nums[mid]==target)
         {
             return mid;
         }
         else if(nums[mid]<target)
         {
             start++;
         }
         else{
             end--;
         }
     }
        return -1;
    }
};