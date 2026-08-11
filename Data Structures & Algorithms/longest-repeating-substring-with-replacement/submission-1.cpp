class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int l=0,maxm=0,ans=0;
        for(int r=0;r<s.size();r++)
        {
            freq[s[r]]++;
            maxm=max(maxm,freq[s[r]]);
            while((r-l+1)-maxm>k)
            {
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
