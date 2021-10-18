#include<iostream>

using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int c=0,p=1,s=0;
    int d,d1,d2;
    while(n1>0||n2>0||c>0){
        d1=n1%10;
        d2=n2%10;
        n1=n1/10;
        n2=n2/10;
        
        d=d1+d2+c;
        c=d/b;
        d=d%b;
        
        s+=d*p;
        p=p*10;
    }

    return s;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}