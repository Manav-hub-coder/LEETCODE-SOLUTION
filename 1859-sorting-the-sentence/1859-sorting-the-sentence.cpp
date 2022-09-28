class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(9);
        string words;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48 and s[i]<=57)
            {
                ans[s[i]-49]=words+" ";
                words="";
                i++;
            }
            else
                words+=s[i];
        }
        words="";
        for(string x:ans)
        {
            words+=x;
        }
        words.pop_back();
        return words;
        
    }
};