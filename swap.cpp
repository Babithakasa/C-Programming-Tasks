#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<" Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"Before swapping: "<<endl;
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After swapping: "<<endl;
	cout<<"a= "<<a<<"\nb= "<<b<<endl;
	return 0;
	}
	
