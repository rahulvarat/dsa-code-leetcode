class Solution {
public:
    int maxArea(vector<int>& arr) {
        int result=INT_MIN;
        int area;
        int left=0;
        int right=arr.size()-1;
        while(left<right){
           area=min(arr[left],arr[right])*(right-left);
            result=max(result,area);
            if(arr[left]<arr[right]){
                left++;
            }else{
                right--;
            }
        }
        return result;
        
    }
};
