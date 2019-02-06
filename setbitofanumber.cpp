#include<iostream>
using namespace std;
int countbits(int n)
{
	int count=0;
	while(n>0)
	{
		count+=n&1;
	
	n=n>>1;
}
return count;
	
}
void even_odd(int n)
{
	n=n&1;
	if(n!=0)
	{
		cout<<"odd";
	}
	else
	{
		cout<<"even";
	}
}
int fastcountbit(int n)
{ int count=0;
	while(n){
	
	n=n&n-1;
	count++;
}
return count;
}
int extractithbit(int n,int i)
{
	n=n&1<<i;
	if(n!=0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	}

int main()
{
	int i,n;
	cin>>n>>i;
	even_odd(n);
	cout<<extractithbit(n,i);
	cout<<countbits(i)<<endl<<fastcountbit(i);
}
