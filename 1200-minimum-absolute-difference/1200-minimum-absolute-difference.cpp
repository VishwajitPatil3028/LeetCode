class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
//         sort(arr.begin(),arr.end());
//         vector<vector<int>>g;
        
//         int z  = INT_MAX;
        
//         vector<int> h = {INT_MAX,INT_MAX};
        
        
//         for(int i = 0 ; i < arr.size()-1;i++){
//             if(abs(arr[i+1]- arr[i]) <= z){
//                 z = abs(arr[i+1]- arr[i]);
//                 cout<< z<<endl;
//                 if(abs(arr[i+1]- arr[i]) <= abs(h[1]- h[0])){
//                     h[0] = arr[i];
//                     h[1] = arr[i+1];
                    
//                 }
//                 g.push_back(h);
                
                
//             }
            
//         }
        
// //         for(int i = 0 ; i < arr.size()-1;i++){
// //             cout << minmax(g[i],g[i+1]);
            
// //         }
        
//         // cout << minmax(g);
//         return g;
    
        sort(arr.begin(),arr.end());
        vector<vector<int>>g;
        int min_diff = INT_MAX;
    
        for(int i = 1 ; i < arr.size() ; i++){
            min_diff = min(arr[i]-arr[i-1],min_diff);
        }
    
        for(int i = 1; i< arr.size();i++){
            if(arr[i]-arr[i-1] == min_diff){
                vector<int> h;
                h.push_back(arr[i-1]);
                h.push_back(arr[i]);
                g.push_back(h);
            }
        }
    
    return g;
        
    }
};