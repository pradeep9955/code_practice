#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int f=max;f>=1;f--){
        for(int i=0;i<n;i++){
            if(arr[i]>=f){
                cout<<"*\t";
            }
            else
                cout<<"\t";
            
        }
        cout<<endl;
    }
    return 0;
}