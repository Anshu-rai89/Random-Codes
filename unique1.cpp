#include<iostream>
using namespace std;
int main()
{
	int i,n,a[1000],unique;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
      while(i>=0)
	{
		unique=a[n-1]^a[n-2];
		i--;
		
		
	}
	cout<<unique;
	/*int a=5,b=7;
	a=a^b;
	b=b^a;
//	cout<<b;
	a=a^b;
	cout<<a<<endl<<b;*/
}
