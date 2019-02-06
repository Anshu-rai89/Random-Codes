#include<iostream>
using namespace std;
void clearbit(int n,int i)
{
	int mask= ~1<<i;
	n=n&mask;
	cout<<n;
}
int main()
{
	int i,n;
	cin>>n>>i;
	clearbit(n,i);
}
