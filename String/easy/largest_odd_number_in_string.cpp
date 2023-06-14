class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string str = "";
        int temp = 0;
        for(int i=0; i<n; ++i)
        {
            int t = (int)('0' - num[i]); 
            if(num[i] %2 != 0)
            temp = i;
        }
        if(temp == 0)
        {
            int m = (int)('0' - num[0]);
            if(m%2==0)
            return str;
        }
        for(int i=0; i<=temp; ++i)
        {
            str.push_back(num[i]);
        }
        return str;
    }
};