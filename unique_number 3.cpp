#include<iostream>
#include<cmath>
using namespace std;
void unique(int *a,int n)
{
	int i;
	 int ans=0;
	 int no;
		int j=0;
		cout<<"you are in function";
	int freq[64]={0};
	for(i=0;i<n;i++)
	{
		no=a[i];
		cout<<no<<endl;
	

	while(no>0)
	{
		if(no&1)
		{
		   freq[j]++;	
		}
		j++;
		no=no>>1;
	}
}
	for(j=0;j<64;i++)
	{
		freq[j]=freq[j]%3;
		if(freq[j]==1)
		{
			ans=ans+pow(2,j);
		}
	}
	cout<<ans;
	//return ans;
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
