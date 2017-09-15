#include <iostream>
using namespace std;
int main() {
int a,j,i;
cout << "Enter number : ";
cin >> a;
j=1;
for( i=a ; i>=1 ; i-- )
{
     j = j * i;
}
cout << j;
return 0;
}
