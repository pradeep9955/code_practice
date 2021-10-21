#include<bits/stdc++.h>
using namespace std;
void rev(int arr[], int i, int j){
    int l=i;
    int r=j;

    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}
void rotate(int arr[], int n, int k){
    k=k%n;
    if(k<0){
        k=k+n;
    }
    //part 1
    rev(arr, 0, n-k-1);

    //part 2
    rev(arr, n-k, n-1);

    //all part
    rev(arr, 0,n-1);
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr, n, k);
    display(arr,n);
}