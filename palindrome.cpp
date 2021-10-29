#include<iostream>
using namespace std;
int isReverse(int);
int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;
	cout<<isReverse(num);
	return 0;
}


int isReverse(int num) {
   // if (num < 0)
   // return 0;
    int rem,rev=0;
    //int temp=num;
	do
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}while(num!=0);

	cout<<"reverse: "<<rev;
		return 0;
}

