//incredible hulk problem
#include<iostream>
using namespace std;
int setbit(int n)
{
	int count=0;
	while(n>0)
	{
		if(n&1)
		{
			count++;
		}
		n=n>>1;
	}
	return count;
}
int main()
{
	int n,count;
	cin>>n;
	count=setbit(n);
	cout<<count;
}
