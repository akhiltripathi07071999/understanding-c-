include <iostream>
using namespace std;
void printreverse(int n){
     if(n<10) cout <<n;
     else{
         cout <<n%10;
         printreverse(n/10);
          }
}
int main(){
cout<<"Enter the numbers which you want return "<<endl;
int n;
cin>>n;
cout<<"The reverse of the numbers is "<<endl;
printreverse n;
return 0;
}
