#include<iostream>
using namespace std;

int main() {
int a=1,b=2,c=3,d;
// a = a + a++ + ++a;
  //++ = increment by 1, -- = decrement by 1
  d = a + b++ - --c;
cout<<d<<endl;
return 0;
}