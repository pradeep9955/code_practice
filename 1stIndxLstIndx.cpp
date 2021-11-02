#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int low=0,high=n-1,fstindx=-1;
    while(low<=high){
        int m=(low+high)/2;
        if(x<arr[m]){
            high=m-1;
        }
        else if(x>arr[m]){
            low=m+1;
        }
        else{
            fstindx=m;
            high=m-1;
        }
    }
    cout<<fstindx<<endl;
    
    int lstindx=-1,lo=0,hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(x<arr[mid]){
            hi=mid-1;
        }
        else if(x>arr[mid]){
            lo=mid+1;
        }
        else{
            lstindx=mid;
            lo=mid+1;
        }
    }
    cout<<lstindx<<endl;
   

    return 0;
}