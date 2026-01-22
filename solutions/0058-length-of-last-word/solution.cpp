class Solution {
public:
    int lengthOfLastWord(string s) {
   
      int c = 0;
      bool F = false;
        
        for (int i = s.size() - 1; i >= 0; i--) {
       
            if (s[i] == ' ' && F)
             {
                return c;
             }
            
            if (s[i] != ' ')
             {
                F = true;
                c++;
             }
             
        }
        
        return c;
    }
};
