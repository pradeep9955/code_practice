#include<iostream>
using namespace std;
int main()
{
	int n1;
	cin>>n1;
	int arr1[n1];
	for(int i=0; i<n1; i++)
	{
		cin>>arr1[i];
		
	}
	int n2;
	cin>>n2;
	int arr2[n2];
	for(int i=0; i<n2; i++)
	{
		cin>>arr2[i];
	}
	
	int sum=n1>n2?n1:n2;
	int c=0;
	
	//int sum[];
	int i=n1-1;
	int j=n2-1;
	int k=sum-1;
	
	while(k>=0)
	{
		int d=c;
		
		if(i>=0)
		{
			d += arr1[i];
		}
		if(j>=0)
		{
			d += arr2[j];
		}
		c=d/10;
		d=d%10;
		
		sum[k]=d;
		
		i--;
		j--;
		k--;
		
	}
	if(c!=0)
	{
		cout<<c;
	}
	for(int i=0; i<sum; i++)
	{
		cout<<sum[i];
	}
	
}
