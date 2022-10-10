class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.length();
        if(n==1)
            return "";
        for(int i=0;i<n/2;i++)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                return palindrome;
            }
        }
        for(int i=n-1;i>=n/2;i--)
        {
            if(palindrome[i]=='z')
            {
                palindrome[i]='a';
                return palindrome;
            }
            else{
                char ch=palindrome[i];
                ch++;
                palindrome[i]=ch;
                return palindrome;
            }
        }
        return "";
    }
};