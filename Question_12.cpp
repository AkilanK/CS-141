#include <iostream>
using namespace std;
int main() {
int a;
cout<<"Enter month number";
cin>>a;
if(a>0 && a<8)
  {
  	if(a==2)
  	  cout<<"Number of days are: 28 OR 29(if it is a leap year)";
  	  else
  	   if(a%2==0)
  	     cout << "Number of days are: 30";
  	     else
  	         cout << "Number of days are: 31";
  }
 if(a>7 && a<13)
  {    if(a%2==0)
         cout<<"The number of days are:31";
       else
         cout<<"The number of days are:30";

   }                                       
return 0;
}
