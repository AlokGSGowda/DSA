#include <iostream>
using namespace std;

int longestsubarray(int arr[], int n, int k){
    int maxlen=0;
    int sum=0;
    int length=0;

    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum+=arr[j];
            if(sum==k){
                length=j-i+1;
            
                if(length>maxlen){
                maxlen=length;
            }
        }
        }
    }
    return maxlen;
}

int main(){
    int n,k;

    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter value of k: ";
    cin>>k;

    cout<<"length of longest subarray: "<< longestsubarray(arr, n, k);

    return 0;
}