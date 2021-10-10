#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="",res="";
    cin>>s;
    int arr[123]={0};
    for(int i=0;i<s.size();i++){
        if(arr[s[i]]==0){
            arr[s[i]]=1;
            res+=s[i];
        }
    }
    cout<<res;

    return 0;
}