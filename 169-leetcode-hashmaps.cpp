class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f;
        int n=nums.size();
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        for(int i=0;i<n;i++){
        if(f[nums[i]]>n/2){
            return nums[i];
        }
    }
    return 0;
    }
};
