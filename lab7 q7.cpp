#include<iostream>
using namespace std;
int palindrone(int x,int y)
{if (x==0){
if (y==x){
	cout<<"The number is a palindrome";
	return 0;}
else
{	cout<<"The number is not a palindrome";
}}
else
{	y=y*10+x%10;
	x=x/10;
	palindrone(y,x);
	return y;}
}
int main(){
int n;
cout<<"Enter the number to determine whether it is a palindrome"<<endl;
cin>>n;
palindrone(0,n);
return 0;
}
