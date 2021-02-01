class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string res = ""; 
        if (strs.size() == 0) return res;
        string prev = strs[0];
        for (string s : strs)
        {
            int lenp = prev.length();
            int  lens =  s.length();
            res.clear();
            for (int i = 0; i < (lens < lenp ? lens : lenp); i++)
            {
                /* code */
                if(prev[i] == s[i])
                {
                    res += prev[i];
                    continue;
                }
                break;
            }
            prev = res;
         }
       return res;
    }
};
