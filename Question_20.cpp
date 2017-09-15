#include <iostream>
using namespace std;
int main() {
float b,g;
cout << "Enter Basic Salary ";
cin >> b;
if(b<=10000)
  g = b + (0.2*b) + (0.8*b);
  else
   if(b<=20000 && b>=10000)
     g = b + (0.25*b) + (0.9*b);
     else
      g = b + (0.3*b) + (0.95*b);
cout << "Gross salary = " << g;
return 0;
}
