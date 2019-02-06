#include<iostream>
using namespace std;
void unique(int a[],int n)
{ //taking xor of all array element
	int res=0,i;
	for(i=0;i<n;i++)
	{
	res=res^a[i];	
	}
	//find out the rightmost set bit(1)
	int temp=res;
	i=0;
	while(temp>0)
	{
	if	((temp&1))
	{
		break;
	}
	i++;
	temp=temp>>1;
	}
	int mask=1<<i;
	int first_number=0;
	for(i=0;i<n;i++)
	{ if((mask&a[i])!=0)
	{
	
		first_number=first_number^a[i];
	}
	}
	int second=res^first_number;
	cout<<first_number<<" "<<second;
}
int main()
{
	int i,n,a[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	unique(a,n);
}
