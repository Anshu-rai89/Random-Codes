#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool check(char* str)
{
	stack<char> s;
	for(int i=0;i<strlen(str);i++)
	{
		char cur=str[i];
		if(cur=='(')
		{
			s.push(cur);
		}
		else if(cur==')')
		{
			if(s.empty()||s.top()==')')
			{
				return false;
			}
		}
		else
		{
			s.pop();
		}
	}
	return true;
}
int main()
{ 
	char exp[100];
	cin>>exp;
if(check(exp))
{
	cout<<"balanced";
}
else
cout<<"unbalanced";
}
