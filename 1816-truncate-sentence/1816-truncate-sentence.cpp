class Solution {
public:
    string truncateSentence(string s, int k) {
         
        int i=1;
        int j=0;
        for(;j<s.length() and i<k;j++)
        {
            if(s[j]==' ')
                i++;
        }
        while(j<s.length() and s[j+1]!=' ')
            j++;
        
        return s.substr(0,j+1);
    }
};