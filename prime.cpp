#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x=i;
		int count=0;
		for(int j=1;j<=x;j++)
		{
			if(x%j==0)
			{
				count++;
			}
		}
		if(count==2)
		cout<<x<<endl;
	}
	
	return 0;
}
