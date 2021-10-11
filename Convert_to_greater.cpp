#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="9983526163";

    //greater
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endl;

    // smaller
    sort(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}