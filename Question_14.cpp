#include <iostream>
using namespace std;
int main() {
float a,b,c;
cout<<"Enter the three angles of triangle(in degrees)respectively";
cin>>a>>b>>c;
if(a+b+c==180)
   cout<<"The triangle is possible";
   else
       cout << "The triangle is not possible";
return 0;
}
