class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,bool>memo;
        
        for (auto num : nums1){
            if(memo.find(num)==memo.end()){
                memo[num] = true;
            }
        }
        
        vector<int> ans ;
        
        for(auto a : nums2){
            if(memo.find(a)!=memo.end() && memo[a]){
                ans.push_back(a);
                memo[a] = false;
            } 
        }
        
        return ans;
        
    }
};