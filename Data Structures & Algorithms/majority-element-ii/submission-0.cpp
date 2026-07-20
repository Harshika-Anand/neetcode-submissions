class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int x:nums)
        freq[x]++;
        for(auto& p:freq)
        {
          if(p.second>n/3)
          ans.push_back(p.first);
        }
        return ans;
    }
};