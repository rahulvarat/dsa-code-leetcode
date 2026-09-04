class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char,char> f;
        unordered_map<char,char> g;

        for(int i = 0; i < s.size(); i++) {

            if(f.count(s[i])) {
                if(f[s[i]] != t[i])
                    return false;
            }
            else {
                f[s[i]] = t[i];
            }

            if(g.count(t[i])) {
                if(g[t[i]] != s[i])
                    return false;
            }
            else {
                g[t[i]] = s[i];
            }
        }

        return true;
    }
};
