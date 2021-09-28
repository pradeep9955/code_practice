#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,2,13,12,15,7};
    arr.push_back(16);
   // arr.pop_back();
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    return 0;
}