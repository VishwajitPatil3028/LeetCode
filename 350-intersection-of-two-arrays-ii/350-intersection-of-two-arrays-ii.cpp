class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>memo;
        
        for (auto num : nums1){
            // if(memo.find(num)==memo.end()){
            //     memo[num] += 1;
            // }
            
            memo[num] += 1;
        }
        
        // for(auto a : memo){
        //     cout<< a.first<<"   "<<a.second<<endl;
        // }
        
        vector<int> ans ;
        
        for(auto a : nums2){
            if(memo.find(a)!=memo.end() && memo[a] >= 1 ){
                ans.push_back(a);
                memo[a] -= 1;
            } 
        }
        
        return ans;
    }
};