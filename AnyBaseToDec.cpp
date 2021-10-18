#include<bits/stdc++.h>
using namespace std;
int AnyBaseToDec(int n, int b){
    int r,y,s=0,p=0;
    while(n>0){
        r=n%10;
        y=pow(b,p++);
        s+=r*y;
        n=n/10;
    }
    return s;
}
int main(){
    int n,b;
    cin>>n>>b;
    int ans=AnyBaseToDec(n,b);
    cout<<ans;
    return 0;
}