#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int find(vector<int> &arr, int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int f=0;
  
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid]){
            ans=min(arr[low], ans);
            if(ans==arr[low]){
            f=low;
            }
            low=mid+1;

        }
        else{
            ans=min(arr[mid], ans);
            if(ans==arr[mid]){
            f=mid;
            }
            high=mid-1;
        }
    }
    return f;
}

int main(){
    
    int n;
    cout<<"Enter number of elemeents: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<find(arr, n);
    
}