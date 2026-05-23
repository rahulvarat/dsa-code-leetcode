class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        
        stack<int> st;
        vector<int> res;

        int n = arr.size();

        for(int i = 0; i < n; i++) {

            bool destroyed = false;

            while(!st.empty() && 
                  st.top() > 0 && 
                  arr[i] < 0 &&
                  abs(st.top()) < abs(arr[i])) {

                st.pop();
            }

          
            if(!st.empty() &&
               st.top() > 0 &&
               arr[i] < 0 &&
               abs(st.top()) == abs(arr[i])) {

                st.pop();
                continue;
            }

           
            if(!st.empty() &&
               st.top() > 0 &&
               arr[i] < 0 &&
               abs(st.top()) > abs(arr[i])) {

                continue;
            }

            st.push(arr[i]);
        }

        while(!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
