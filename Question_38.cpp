#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout << "Enter number";
cin >> a;
b = a;
while(b!=0)
{
     c=(c*10) + (b%10);
     b /= 10;
}
if( c==a)
  cout<<"The number is palindrome";
  else
   cout<<"The number is not palindrome";
return 0;
}
