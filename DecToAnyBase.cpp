#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b;
    cin>>n>>b;
    int r,s=0,c=0;
    while(n!=0){
        r=n%b; 
        s+=r*pow(10,c++);
        n=n/b;

    }
    cout<<s;
    
}