class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        for(int j=1;i<nums.size()-1;j++){
            
   
      int sum=nums[i]+nums[j];
      if(sum==target){
      return { i,j};
        }
        if(j==nums.size()-1){
            i++;
            j=i;
        }
        }
     return { };
        
    }
};