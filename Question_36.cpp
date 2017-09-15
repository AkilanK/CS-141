#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout << "Enter number : ";
cin >> a;
b = a;
c = 1;
while(b!=0)
{
     c = c * (b%10);
     b = b / 10;
}
cout << "Product of digits = " << c;
return 0;
}
