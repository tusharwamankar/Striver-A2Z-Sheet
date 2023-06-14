class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int n = s.length();
        for(int i=0; i<n; ++i)
        {
            string str="";
            if(s[i] != ' ' && i<n)
            {
                while(s[i] != ' ' && i<n)
                {
                    str.push_back(s[i]);
                    i++;
                }
                v.push_back(str);
            }
        }
        string ans = "";
        n = v.size();
        for(int i=0; i<n; ++i)
        {
            ans+= v[n-i-1];
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};