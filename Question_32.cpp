#include <iostream>
using namespace std;
int main() {
int i,j;
cout<<"Enter number ";
cin>>i;
j=i;
while(j>10)
{
    j = j / 10;
}
cout << "First digit is " << j << "\nLast digit is " << i%10;
return 0;
}
