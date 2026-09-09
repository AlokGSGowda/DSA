class Solution {
public:
    int first(vector<int> &nums,int n, int x){
    int l=0;
    int r=n-1;
    int first=-1;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==x){
            first=mid;
            r=mid-1;
        }
        else if(nums[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return first;

}
    int last(vector<int> &nums,int n, int x){
    int l=0;
    int r=n-1;
    int last=-1;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==x){
            last=mid;
            l=mid+1;
        }
        else if(nums[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return last;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=first(nums, nums.size(), target);
        if(f==-1){
            return {-1,-1};
        }
        int l=last(nums, nums.size(), target);

        return {f, l};
        
    }
};