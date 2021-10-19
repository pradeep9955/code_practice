#include<iostream>
using namespace std;

int DiffOfMaxMin(int arr[],int n){
    int max=arr[0], min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int d=max-min;
    return d;
}

int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=DiffOfMaxMin(arr,n);
    cout<<x;
    
}