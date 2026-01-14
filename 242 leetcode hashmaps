class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        
        for(int i=0;i<s.size();i++){
            need[s[i]]++;
        }
         for(int i=0;i<t.size();i++){
            have[t[i]]++;
        }
        for(auto i:need){
            char c=i.first;
            int fneed=i.second;
            int fhave=have[c];
            if(fneed!=fhave){
                return false;
            }
        }
        return true;

        
    }
};
