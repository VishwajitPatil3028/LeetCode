class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
            nums[i] = nums[i] + (n * (nums[nums[i]] % n));
        for (int i = 0; i < nums.size(); i++)
             nums[i] /= n;    
        return nums;
    }
};