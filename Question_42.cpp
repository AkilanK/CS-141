#include <iostream>
using namespace std;
int main() {
int a,b,value,i;
cout << "Enter base & exponent respectively ";
cin >> a >> b;
value = a;
for(i=1;i<b;i++)
{
	value = value * a;
}
cout <<value;
return 0;
}
