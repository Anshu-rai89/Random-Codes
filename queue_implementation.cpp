#include<iostream>
using namespace std;
template<typename t>
class queue
{
	int f;
	int r;
	int cs;
	int ms;
	t*arr;
	public:
		queue(int d=4)
		{
			 f=0;
			 r=d-1;
			 cs=0;
			 ms=d;
			 arr=new t(ms);	
		}
		bool empty()
		{
			return cs==0;
		}
		bool full()
		{
			return cs==ms;
		}
		void push(t data)
		{ if(!full())
		{
		
			r=(r+1)%ms;
			arr[r]=data;
			cs++;
		}
	}
	void pop()
	{
		if(!empty())
		{
			f=(f+1)%ms;
			cs--;
		}
	}
	t getfront()
	{
		return arr[f];
	}
};
int main()
{
	queue<int> q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   q.push(i*i);	
	}
	while(!q.empty())
	{
		int temp=q.getfront();
		cout<<temp<<endl;
		q.pop();
	}
}
