class Solution {
public:
    bool isVowel(char v)
    {
        return v=='a'||v=='e'||v=='i'||v=='o'||v=='u'
            ||v=='A'||v=='E'||v=='I'||v=='O'||v=='U';
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {
            while(start<s.size() and !isVowel(s[start]))
            {
                start++;
            }
            while(end>=0 and !isVowel(s[end]))
            {
                end--;
            }
            if(start<end)
            {
                swap(s[start++],s[end--]);
            }
        }
        return s;
    }
};