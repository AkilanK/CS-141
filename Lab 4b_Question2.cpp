#include<iostream>
using namespace std;

int number(int n,int i)
{
 if(i<=n)
  {
   cout << i << "\n";
   return (number(n,++i));
  }
 

}

int main()
{
int n;
cout <<"Enter a number";
cin >> n;
cout << number(n-1,1);
}
