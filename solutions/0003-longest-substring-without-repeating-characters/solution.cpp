class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int char_map[128];
        for (int i = 0; i < 128; i++)
        {
            char_map[i] = -1;
        }
        int max_len = 0;
        int l = 0;

        int n = s.length();
        for (int r = 0; r < s.length(); ++r)
        {
            int current_char = s[r];
            if (char_map[current_char] >= l)
            {
                l = char_map[current_char] + 1;
            }
            char_map[current_char] = r;

            int current_len = r - l + 1;

            if (current_len > max_len)
            {
                max_len = current_len;
            }
        }
        return max_len;
    }
};

