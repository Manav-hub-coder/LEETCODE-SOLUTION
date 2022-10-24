class Solution {
public:
    int maxPower(string s) {
        if(s.size()==1)
            return 1;
        int curr=0;
        int maxlen=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
               {
                curr++;   
               }
            else
                curr=0;
            maxlen=max(maxlen,curr+1);
        }
        return maxlen;
    }
};