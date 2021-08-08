class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int dp[nums.size()+1];
        int n = nums.size();
        dp[0]=0;
        dp[1]=0;
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if((nums[i]-nums[i-1])==(nums[i-1]-nums[i-2]))
            {
                dp[i]=dp[i-1]+1;
            }
            else
            {
                dp[i]=0;
            }
            ans+=dp[i];
        }
        return ans;
    }
};