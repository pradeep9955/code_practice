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
int DecToAnyBase(int n,int b){
    int r,s=0,c=0;
    while(n!=0){
        r=n%b; 
        s+=r*pow(10,c++);
        n=n/b;

    }
    return s;
}


int main(){
    int n,b1,b2;
    cin>>n>>b1>>b2;
    //int dec,finalNo;
    int dec=AnyBaseToDec(n,b1);
    int finalNo=DecToAnyBase(dec,b2);
    //int ans=AnyBaseToAnyBase(n,b1,b2);
    cout<<finalNo;
    
}