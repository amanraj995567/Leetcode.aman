class Solution {
public:

int usingMemoization(vector<int>& nums ,int n , vector<int> &dp){

    if(n<0)return 0;
    if(n==0)return nums[0];
    
    if(dp[n]!=-1)return dp[n];
    

    int include = usingMemoization(nums , n-2 , dp ) + nums[n];
    int exclude = usingMemoization(nums , n-1 , dp);

    dp[n] =  max(include , exclude);
    return dp[n];
     
}
    int rob(vector<int>& nums) {
        
        int n = nums.size()-1;
        vector<int> dp(n+1 , -1);
        int ans = usingMemoization(nums , n  , dp);
        return ans;

    }
};