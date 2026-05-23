class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int>st;
        vector<int>res;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                res.push_back(0);
            }else{
                res.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};
