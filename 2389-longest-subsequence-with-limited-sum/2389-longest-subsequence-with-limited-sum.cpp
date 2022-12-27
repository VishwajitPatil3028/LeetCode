class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& que) {
        int n = nums.size();
        int m = que.size();
        int sum =0;
        vector<int> ans(m, 0);
        sort(nums.begin(), nums.end());

        for(int i=0; i<m; i++){
            sum =0;
            for(int j=0; j<n; j++){
                sum += nums[j];
                if(sum <= que[i]) ans[i] = j+1;
                else break;
            }
        }

        return ans;
    }
};