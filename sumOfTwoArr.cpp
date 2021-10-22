#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    int x=n1>n2?n1:n2;
    int s[x];
    int i=n1-1;
    int j=n2-1;
    int k=x-1;
    int carry=0;
    while(k>=0){
        int d=carry;
        if(i>=0){
            d+=a1[i];
        }
        if(j>=0){
            d+=a2[j];
        }
        carry=d/10;
        d=d%10;

        s[k]=d;

        i--;
        j--;
        k--;
    }
    if(carry!=0){
        cout<<carry<<endl;
    }
    for(auto ans:s){
        cout<<ans<<endl;
    }


}