class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,int> smap, tmap;
        int n = s.length();
        for(int i=0; i<n; ++i)
        {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        return (smap==tmap);
    }
};