// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int beg,mid,end;
        beg=1;
        end=n;
        int pos=1;
        while(beg<=end)
        {
            mid=beg+(end-beg)/2;
        bool x=isBadVersion(mid);
            if(x==true)
            {
                pos=mid;
                end=mid-1;
            }
            else
            {
                beg=mid+1;
            }
        }
        return pos;
    }
};