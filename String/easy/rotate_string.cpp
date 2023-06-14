class Solution {
public:
void rotate(string &goal)
{
    char c = goal[0];
    int n = goal.length();
    for(int i=1; i<n; ++i)
    {
        goal[i-1] = goal[i];
    }
    goal[n-1] = c;
}
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(s.length() != goal.length())
        return false;
        for(int i=0; i<n; ++i)
        {
            if(s == goal)
            {
                return true;
            }
            rotate(goal);
        }
        return false; 
    }
};