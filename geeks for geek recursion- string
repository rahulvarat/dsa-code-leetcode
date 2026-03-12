class Solution {
public:
    
    bool ispalindrome(string& s, int low, int high) {

        int len = high - low + 1;

        if(len == 0 || len == 1){
            return true;
        }

        if(s[low] != s[high]){
            return false;
        }

        return ispalindrome(s, low+1, high-1);
    }
};
