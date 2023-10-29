#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int count = 0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count=1;
            }
        }
        if(count==0){
            break;
        }
        // cout<<"run\n";
        
    }
}

int main(){
    int n;
    // cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    // cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}