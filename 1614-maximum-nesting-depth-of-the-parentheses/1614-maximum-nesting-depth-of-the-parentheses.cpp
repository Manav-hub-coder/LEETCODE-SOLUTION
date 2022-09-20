class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxm=0;
        for(auto &c:s)
        {
            if(c=='(')
            {
                count++;
                maxm=max(maxm,count);
            }
            else if(c==')')
            {
                count--;
            }
        }
        return maxm;
    }
};