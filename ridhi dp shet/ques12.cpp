class Solution {
public:
    int rob1(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        vector<int> a(nums.size());
        if(n>=1) a[0]=nums[0];
        if(n>=2) a[1]=max(nums[1],nums[0]);
        for(int i=2;i<n;i++)
        {
            a[i]=max(a[i-1],a[i-2]+nums[i]);
        }
        return a[n-1];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums.size()-1;i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i++)
        {
            v2.push_back(nums[i]);
        }
        return max(rob1(v1),rob1(v2));
    }
};