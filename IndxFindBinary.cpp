#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int l,int h,int k){
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==k){
            return m;
        }
        else if( arr[m]<k){
            return binarysearch(arr, m+1,h,k);
        }
        else{
            return binarysearch(arr, l,m-1,k);
        }

    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=binarysearch(arr, 0,n-1,k);
    cout<<x;
    return 0;
}