class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();

        if(s_size != t_size)  return false;

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0; i<s_size; i++)
            if(s[i] != t[i])  return false;
        
        return true;
    }
};
