#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    int count=0;
    while(n!=0){
        int r=n%10;
        if(r==c){
            count++;
        }
        n=n/10;
    }

    cout<<count;
    
    return 0;
}