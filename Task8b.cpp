#include<iostream>
using namespace std;
main(){
int digit;
int sum;
int n1,n2,n3,n4;
int r1,r2,r3,r4;
cout <<  "Enter a 4 didit No : " ;
cin >> digit;
r1=digit%10;
n1=digit/10;
r2=n1%10;
n2=n1/10;
r3=n2%10;
n3=n2/10;
r4=n3%10;
n4=n3/10;




sum=r1+r2+r3+r4;
cout << "Sum is : " <<sum;
}