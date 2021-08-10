class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(ans.back()<nums[i])
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int idx= lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[idx]=nums[i];
            }
        }
        return ans.size();
    }
};