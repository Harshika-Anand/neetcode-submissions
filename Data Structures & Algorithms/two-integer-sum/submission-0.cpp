class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            int diff=target-nums[i];
            if(freq.find(diff)!=freq.end())
            return {freq[diff],i};
            freq.insert({nums[i],i});
        }
        return {};
    }
};
