#include<iostream>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
    int d=0,c=0,p=1,s=0;
    while(n2>0){
        int d1=n1%10;
        int d2=n2%10;
        n1=n1/10;
        n2=n2/10;
        
        d2=d2+c;
        if(d2>=d1){
            c=0;
            d=d2-d1;
        }
        else{
            c=-1;
            d=d2+b-d1;
        }
        s+=d*p;
        p=p*10;
        
    }
    return s;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    int ans=getDifference(b,n1,n2);
    cout<<ans;
}