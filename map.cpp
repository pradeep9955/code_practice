/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void print(map<int, string>&m){
    cout<<m.size()<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main()
{
    map<int, string> m;
    m[1]="abc";
    m[4]="cba";
    m[3]="adc";
    m.insert({2,"cda"});
    //map<int, string>::iterator it;
    auto it = m.find(2);
    m.erase(it);
    m.clear();
    print(m);
    
    
    /*
    auto it = m.find(3);
    if(it==m.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    */
    
    /*
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    print(m);
    */
    
    /*
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    */
    

    return 0;
}
