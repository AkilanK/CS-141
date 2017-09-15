#include <iostream>
using namespace std;
int main() {
int i,j;
cout << "Enter number : ";
cin >> i;
j = i;
while(j>10)
{
     j = j / 10;
}
cout << "Sum of first & last digit = " << j + (i%10);
return 0;
}
