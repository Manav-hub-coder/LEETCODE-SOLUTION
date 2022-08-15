class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==0||num==1)
        {
            return num;
        }
        int s=1;
        int e=num;
        long temp;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            temp=(long)mid*(long)mid;
            if(temp==num)
            {
                return true;
            }
            else if(temp<num)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};