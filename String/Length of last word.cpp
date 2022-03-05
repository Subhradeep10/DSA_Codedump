class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int cnt = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && cnt > 0)
            {
                return cnt;
            }
            else if (s[i] != ' ')
            {
                cnt++;
            }
        }
        return cnt;
    }
};