class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int mn = INT_MAX;
        int n = strs.size();
        for(int i=0; i<n; ++i)
        {
            int m = strs[i].size();
            mn = min(mn, m);
        }
        string t = "";
        for(int i=0; i<mn; ++i)
        {
            t.push_back(strs[0][i]);
        }
        int count = 0;
        for(int i=0; i<mn; ++i)
        {
            char c = strs[0][i];
            for(int j=0; j<n; ++j)
            {
                if(strs[j][i] == c)
                count++;
            }
            if(count == n)
            {
                s.push_back(c);
                count = 0;
            }  
            else if(count != n)
            break; 
        }
        return s;
    }
};