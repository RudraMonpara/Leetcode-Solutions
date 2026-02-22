class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); ++i) {
            if (haystack.compare(i, needle.size(), needle) == 0) {
                return i;
            }
        }
        return -1;
    }
};
