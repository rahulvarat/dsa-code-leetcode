class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=0;
        int total=INT_MIN;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
          continue;
        }

           else if(nums[i]==nums[i+1]-1){
                count++;

            }else{
                total=max(total,count);
                count=1;
            }
        }
          total=max(total,count);
        return total;
        
    }
};
