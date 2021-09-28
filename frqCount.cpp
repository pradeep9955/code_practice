#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    map<string, int>m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}