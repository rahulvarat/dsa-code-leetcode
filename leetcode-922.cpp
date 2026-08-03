class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>arr(nums.size());
        int sum=0;
        int odd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                if(sum%2==0){
                    arr[sum]=nums[i];
                    sum=sum+2;
                }
            }else if(nums[i]%2!=0){
                if(odd%2!=0)
                arr[odd]=nums[i];
                odd=odd+2;
            }
        }
        return arr;
        
    }
};
