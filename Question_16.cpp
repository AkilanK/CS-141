#include <iostream>
using namespace std;
int main() {
float a,b,c;
cout<<"Enter the three sides of triangle";
cin >> a >> b >> c;
if(a==b & a==c)
   cout<<"The triangle is equilateral";
   else
   if((a==b & a!=c) || (b==c & b!=a) || (a==c & a!=b))
       cout << "The triangle is isoceles";
       else
          cout << "The triangle is scalene";
return 0;
}
