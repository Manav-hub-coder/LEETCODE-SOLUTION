class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(s[i]>=48 and s[i]<=57)
//             {
//                 ans[s[i]-49]=s[i];
                
//             }
//         }
//         for(int i=0;i<ans.size()-1;i++)
//         {
//             if(ans[i]>ans[i+1])
//                 return false;
//         }
//         return true;
         int prev = 0, cur = 0;
    for (auto ch : s) {
        if (isdigit(ch))
            cur = cur * 10 + (ch - '0');
        else if (cur != 0) {
            if (prev >= cur)
                return false;
            prev = cur;
            cur = 0;
        }
    }
    return cur == 0 || prev < cur;
    }
};