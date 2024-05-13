#include<iostream>
using namespace std;

int main() {

float n1,n2;
cout<<"Enter your number (e.g- 5 9)"<<endl;
cin>>n1>>n2;

char op; 
cout<<"Enter operator(+,-,/,*)"<<endl;
cin>>op;

switch(op) {
case '+':
cout<<"Result:"<<n1 + n2<<endl;
break;

case '-':
cout<<"Result:"<<n1 - n2<<endl;
break;

case '*':
cout<<"Result:"<<n1 * n2<<endl;
break;

case '/':
cout<<"Result:"<<n1 / n2<<endl;
break;

default:
cout<<'Enter valid operator'<<endl;
break;
}
return 0; 
}
