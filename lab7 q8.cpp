#include<iostream>
using namespace std;
int sum(int x,int i,int y)
{if(y==0)																												{	cout<<x;
	 return 0;}
else{
	i=y%10;
	x+=i;
	y=y/10;
	sum(x,i,y);
	return 0;
}}	
int main()
{
int n;
cout<<"Enter the numbers whose sum you want to find"<<endl;
cin>>n;
sum(0,0,n);
cout<<endl;
return 0;
}
