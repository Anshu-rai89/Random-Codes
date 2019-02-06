#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,j;
	cin>>n1>>n2;
	int a[n1][n2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum1=0,sum2=0,r=0,c=0,k=0,m=0;
	int res1=0,res2=0;
	//traversing row
	while(k<n1)
	{ 
		for(j=0;j<n2;j++)
		{
			sum1=sum1+a[k][j];
		}
	//	cout<<" row sum"<<k<<" "<<sum1<<endl;
		if(sum1>res1)
		{
			res1=sum1;
			r=k;
			//cout<<" storing max sum present in "<<r<<" sum is"<<res1<<endl;
		}
		sum1=0;
	
		k++;
	}
	while(m<n2)
	{
		for(i=0;i<n1;i++)
		{
			sum2=sum2+a[i][m];
		}
		if(sum2>res2)
		{
		  res2=sum2;
		  c=m;	
		}
		sum2=0;
		m++;
	}
	if(res2>res1)
	{
		cout<<"col is "<<c<<" "<<res2;
	}
	else
	{
		cout<<"row is "<<r<<" "<<res1;
	}
	
}
