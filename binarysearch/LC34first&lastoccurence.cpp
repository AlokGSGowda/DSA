class Solution {
public:
    int lowerbound(vector<int> &nums,int n, int x){
    int l=0;
    int r=n-1;
    int ans=n;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]>=x){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}
    int upperbound(vector<int> &nums,int n, int x){
    int l=0;
    int r=n-1;
    int ans=n;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]>x){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lowerbound(nums, nums.size(), target);
        if(lb==nums.size()||nums[lb]!=target){
            return {-1,-1};
        }
        int ub=upperbound(nums, nums.size(), target);

        return {lb, ub-1};
        
    }
};