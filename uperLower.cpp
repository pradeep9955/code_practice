#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ahHdfZjflwe";
    // 1. convert lower to upper
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;

    // 1. convert upper to lower
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    // 2. convert lower to Upper
    transform(s.begin(), s.end(), s.begin(),::toupper);
    cout<<s<<endl;
    // 2. convert upper to lower
    transform(s.begin(),s.end(), s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}