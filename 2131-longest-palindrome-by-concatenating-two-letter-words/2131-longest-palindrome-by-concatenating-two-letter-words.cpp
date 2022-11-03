class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>count;
        for(const string&word:words)
        {
            count[word]++;
        }
        int ans=0;
        bool central=false;
        
        for(const auto&[word,countoftheword]:count)
        {
            if (word[0]==word[1])
            {
                if(countoftheword%2==0)
                    ans+=countoftheword;
                else{
                    ans+=countoftheword-1;
                    central=true;
                }
            }
            else if(word[0]<word[1]&&count.count({word[1],word[0]})){
                ans+=2*min(countoftheword,count[{word[1],word[0]}]);
            }
        }
        if(central)
            ans++;
        return 2*ans;
    }
};