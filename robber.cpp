#include<iostream>
using namespace std;
int fetchsubset(int a[],int n)
{
	int i=0,ans,sum=0;
	while(n>0)
	{
		if(n&1)
		{
			ans=a[i];
			sum+=ans;
			/*if(sum==k)
			{
				cout<<"yes";
			}
			else
			{
				cout<<"no";
			}*/
			//cout<<ans;
		}
		i++;
		n=n>>1;
	//	cout<<endl;
	}
	
	return sum;
	//cout<<endl;
}
void subset(int a[],int n,int k)
{ 
	int range=(1<<n)-1,i,sum,flag=0;
	for(i=0;i<=range;i++)
	{ sum=fetchsubset(a,i);
	if(sum==k)
	{ flag=1;
		}	
	}
	if(flag==1)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
}
int main()
{
	int i,n,k,a[1000];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	subset(a,n,k);
}
