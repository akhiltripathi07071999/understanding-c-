#include <iostream>
using namespace std;
void printreverse(int n){
     if(n<10) cout <<n;
     else{
         cout <<n%10;
         printreverse(n/10);
          }
}
int main(){
int n;
cout<<"Enter the numbers which you want to be reversed"<<endl;
cin>>n;
cout<<"The reversed numbers are"<<endl;
printreverse(n);
return 0;
}
