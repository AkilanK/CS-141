#include <iostream>
using namespace std;
int main() {
int a,rup2000,rup500,rup200,rup100,rup50,rup20,rup10,rup5;
cout << "Enter amount";
cin>>a;
if(a%5==0)
{
rup2000 = a / 2000;
a %= 2000;
rup500 = a / 500;
a %= 500;
rup200 = a / 200;
a %= 200;
rup100 = a / 100;
a %= 100;
rup50 = a / 50;
a %= 50;
rup20 = a / 20;
a %= 20;
rup10 = a / 10;
a %= 10;
rup5 = a / 5;
cout << "Rs. 2000 = "<< rup2000 << "\nRs. 500 = " << rup500 << "\nRs. 200 = " << rup200 << "\nRs. 100 = " << rup100 << "\nRs. 50 = " << rup50 << "\nRs 20 = " << rup20 << "\nRs. 10 = " << rup10 << "\nRs. 5=" << rup5;
}
else
   cout << "Denomations of this amount is are not available";
return 0;
}
