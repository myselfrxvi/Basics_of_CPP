#include<iostream>
using namespace std;

int main() {
int a,b;
cin>>a>>b;

    for(int date=a; date<=b; date++) {

    if(date%3==0) {
    continue;
    
    }
    cout<<date<<endl;
    }
    return 0;
}
