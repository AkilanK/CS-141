#include <iostream>
using namespace std;
int main() {
int a,i;
cout<<"Enter number ";
cin>>a;
i=0;
while(a!=0)
{
     a = a / 10;
     ++i;
}
cout << "Number of digits = " << i;
return 0;
}
