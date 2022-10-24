class Solution {
public:
    bool check_pallindrome(string s)
    {
        int j=s.length()-1;
        int i=0;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string str="";
        for(int i=0;i<n;i++)
        {           
              if(check_pallindrome(words[i]))
              {
                  return words[i];
              }
        
        }
        return "";
    }
};