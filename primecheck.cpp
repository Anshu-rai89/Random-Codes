#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n) // bool function to return if number is prime than true if not than false
{
	for(int i=3;i<=sqrt(n);i+=2) // traversing till square root only as if number is not prime it will encounter a number before tht which will divide it
	{
		if(n%i==0)
		{
			return false; // number get divided so its not prime retun false
			
		}
		
	}
	return true; // number didnt got divided by any number till square root hence it wont get divided by anyother factor except number itself
	
}
int main()
{
	int n;
	cin>>n;
	
if(prime(n)) // calling bool function if it return true if will excute
{
	cout<<"prime";
}
else   // if bool return false else will handle it
cout<<"not prime";
}
