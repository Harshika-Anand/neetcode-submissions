class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
        return false;
        unordered_map<char,int> freq1;
        for(int x:s)
        freq1[x]++;
        unordered_map<char,int> freq2;
        for(int x:t)
        freq2[x]++;
        for (auto p : freq1) 
        if (freq2[p.first] != p.second)
        return false;
        return true;
    }
};
