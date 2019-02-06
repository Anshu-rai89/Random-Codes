#include<iostream>
#include<vector>
using namespace std;
template<typename t>
class stack
{  vector <t> v;
	public:
		void push(t data)
		{
		    v.push_back(data);
		}
		bool empty()
		{
			return v.size()==0;
		}
		void pop()
		{ if(!empty())
		{
		
			v.pop_back();
		}
	 }
	 t gettop()
	 {
	 	return v[v.size()-1];
	 }
};
int main()
{
	stack<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  s.push(i);
	}
	while(!s.empty())
	{
		cout<<s.gettop()<<endl;
		s.pop();
	}
}
