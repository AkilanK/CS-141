#include<iostream>
using namespace std;

int even(int n,int i)
{
 if(i<=n)
  {
   if(i%2==0)
   cout << i << "\n";
   return (even(n,++i));
  }
 return 1;
}

int odd(int n,int i)
{
 if(i<=n)
  {
   if(i%2!=0)
   cout << i << "\n";
   return (odd(n,++i));
  }
 return 1;
 }


int main()
{
int n,i;
cout << "Enter a number : ";
cin >>n;
cout << "Enter 0 to get all even numbers and 1 to get all odd numbers and kindly neglect the last number of the output";
cin >> i;
if(i==0)
cout << even(n,1);
else if(i==1)
cout << odd(n,1);
}

