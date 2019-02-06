#include<iostream>
#include<stack>
using namespace std;
void transfer(stack<int>&s1,stack<int>&s2,int n)
{ for(int i=0;i<n;++i)
{
	cout<<"in function transfer";

	s2.push(s1.top());
	s1.pop();
}
}
void reverse(stack<int>&s)
{
	stack<int> s1;
	int n=s.size();
	for(int i=0;i<n;++i)
	{
	
	int x=s.top();
	cout<<"top in reverse is"<<x<<endl;
	s.pop();
	transfer(s,s1,n-i-1);
	s.push(x);
	transfer(s1,s,n-i-1);
}
}
void insert(stack<int>&s1,int k)
{
	if(s1.empty())
	{
		s1.push(k);
		return;
	}
	int y=s1.top();
	s1.pop();
	insert(s1,k);
	s1.push(y);//
}
void recursionrev(stack<int>&s)
{
	if(s.empty())
	{
		return;
	}
	int x=s.top();
	s.pop();
	recursionrev(s);
	insert(s,x);
}
int main()
{
	stack <int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s.push(i);
	}
	recursionrev(s);
//reverse(s);
	while(s.empty()==false)
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
