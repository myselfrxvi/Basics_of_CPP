#include<iostream>
using namespace std;

int main() {

char button;
cout<<"Input A Character"<<endl;
cin>>button;

switch(button)
{
case 'a':
cout<<"Hola"<<endl;
break;

case 'b':
cout<<"How Are you?"<<endl;
break;

default:
cout<<"I'm still learning"<<endl;
break;
}
return 0;
}

