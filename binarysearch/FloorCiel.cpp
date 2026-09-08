#include <iostream>
using namespace std;

int floor(int nums[],int n, int x){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]<x){
            ans=nums[mid];
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;

}
int ciel(int nums[],int n, int x){
    int l=0;
    int r=n-1;
    int ans=-1;

    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]>x){
            ans=nums[mid];
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;

}
int main(){
    int n,x;

    cout<<"Enter number of array elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter target element: ";
    cin>>x;
    cout<<"flooe and ciel: "<<floor(arr,n,x)<<ciel(arr, n, x);
    return 0;


}