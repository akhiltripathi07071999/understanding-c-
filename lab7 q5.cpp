#include<iostream>
using namespace std;
int sum(int num) {
if (num==0)
   return 0;
if (num %2==0)
   return num%10+sum(num/10);
else return sum(num/10);
}

int main(){
cout<<"Enter the number -";
int num;
cin>>num;
cout<<"The sum of even numbers are -"<< sum(num)<<endl;
return 0;
}
