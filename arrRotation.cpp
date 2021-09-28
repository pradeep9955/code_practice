#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr, int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotatrArr(vector<int>&arr,int d,int n){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    vector<int>arr {1,2,3,4,5,6,7};
    int n=arr.size();
    int d;
    cin>>d;
    rotatrArr(arr, d, n);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}