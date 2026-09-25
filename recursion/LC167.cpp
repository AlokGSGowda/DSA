class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int cursum=nums[low]+nums[high];
            if(cursum>target){
                high--;
            }
            else if(cursum<target){
                low++;
            }
            else{
                return {low+1, high+1};
            }
        }
        return {};
        
    }
};