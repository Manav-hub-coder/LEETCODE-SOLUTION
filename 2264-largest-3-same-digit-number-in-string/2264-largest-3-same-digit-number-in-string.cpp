class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        if(n<3)
        {
            return "";
        }
        if(n==3)
        {
            if(num[0]==num[1] and num[1]==num[2])
                return num;
        }
        string max="000";
        string st="";
        for(int i=0;i<n-1;i++)
        {
            if(num[i]==num[i+1] and num[i+1]==num[i+2])
            {
                st=num.substr(i,3);
                if(max[0]<st[0])
                {
                    max=st;
                }
            }
        }
        if(st.empty())
            return "";
        return max;
    }
};