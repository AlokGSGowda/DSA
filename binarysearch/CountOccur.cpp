#include <iostream>
using namespace std;

int first(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return first;
}

int last(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return last;
}

int main(){
    int n,x;

    cout<<"Enter number of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter target element: ";
    cin>>x;
    int f=first(arr, n, x);
    int l=last(arr, n, x);

    cout<<"Count occurence: "<< l-f+1;
}