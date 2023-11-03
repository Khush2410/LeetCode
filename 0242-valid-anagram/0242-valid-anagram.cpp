class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }

        for(int i = 0;i<t.length();i++)
        {
            mp[t[i]]++;
        }

        if(m == mp)
        return true;

        return false;
    }
};