class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string res;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top().first==s[i]){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({s[i],1});
            }
        }
        while(!st.empty()){
            char ch=st.top().first;
            int second=st.top().second;
            while(second--){
                res.push_back(ch);
            }
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};
