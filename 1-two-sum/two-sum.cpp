class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<=nums.size()-2;i++){
            for(int j=i+1;j<=nums.size()-1;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {}; // No solution found
    }
};