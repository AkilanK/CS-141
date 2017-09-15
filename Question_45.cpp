#include <iostream>
using namespace std;
int main() {
int a,b,j,i;
cout<<"Enter two numbers";
cin >> a >> b;
for(i=1 ; i<=a ; i++)
{
	if(a%i==0 && b%i==0)
	  i=j;
}
cout << "HCF = "<< j;
return 0;
}
