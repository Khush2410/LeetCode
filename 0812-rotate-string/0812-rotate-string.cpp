class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int len = s.length();
        int i = 0;
        int count = 0;

        while(count < len)
        {
            char ch = s[i];
            for(int j=i;j<s.length()-1;j++)
            {
                s[j] = s[j+1];
            }
            s[s.length()-1] = ch;
            if(s == goal)
            return true;
            count++;
        }
        return false;
    }
};