class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       if(amount<1)return 0;
        
        int dp[amount+1];
        
        // mark all targets as unset
        for(int i=0;i<=amount;i++)dp[i] = INT_MAX;
        
        // 0 target has 0 ways
        dp[0] = 0;
        
        // for each coin check their contribution from c to target
        for(int c : coins)
        {
            // start from the coin as smaller target cannot be made using current coin
            for(int i=c;i<=amount;i++)
            {
                // if complement result is available then we update the way for current target
                if(dp[i-c]!=INT_MAX)
                    dp[i] = min(dp[i],dp[i-c]+1);
            }
        }        
        
        return dp[amount]==INT_MAX?-1:dp[amount];
    
    }
};