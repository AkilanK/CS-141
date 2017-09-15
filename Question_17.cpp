#include <iostream>
#include<cmath>
using namespace std;
int main() {
float a,b,c,d,p,q;
cout << "Enter the coefficient of x², coefficient of x & the constant term respectively : ";
cin>>a>>b>>c;
d = (b*b) - (4*a*c);
if(d>0)
{
  cout << "p = " << (-b + sqrt(d))/(2*a);
  cout << "q = " << (-b - sqrt(d))/(2*a);
}
  else
    if(d==0)
    {
      cout << "x = " << -b/(2*a);
    }
    else
      if(d<0)
        cout << "no real roots";
      
return 0;
}
