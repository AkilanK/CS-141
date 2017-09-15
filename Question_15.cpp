#include <iostream>
using namespace std;
int main() {
float a,b,c;
cout<<"Enter the three sides of triangle";
cin>>a>>b>>c;
if(a+b>c || a+c>b || b+c>a)
   cout << "The triangle is possible";
   else
       cout << "The triangle is not possible";
return 0;
}
