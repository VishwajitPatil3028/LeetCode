class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> ans;
        for(int i=0;i<capacity.size();i++)
            ans.push_back(capacity[i]-rocks[i]);
        sort(ans.begin(),ans.end());
        int i=0;
        while(i<capacity.size())
        {
            if(additionalRocks<ans[i])
            {
                ans[i]-=additionalRocks;
                additionalRocks=0;
                break;
            }
            else
            {
                additionalRocks-=ans[i];
                ans[i]=0;
            }
            if(additionalRocks<=0)
                break;
            i++;
        }
        int fk=count(ans.begin(),ans.end(),0);
        return fk;
    }
};