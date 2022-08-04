class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>a ;
        
        for(int i = 0 ; i < nums.size(); i++){
            a[nums[i]] +=1;
        }
        
        for(auto b : a){
            cout << b.first<<"    "<<b.second<<endl;
            if(b.second >=2) {
                return b.first;
            }
        }
        
//         for(int i = 0 ; i < nums.size(); i++){
            
//             if(a[i] >=2) {
//                 return a[i];
//             }
//         }
        return -1;
    }
};