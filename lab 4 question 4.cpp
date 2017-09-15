#include<iostream>
using namespace std;
int even(int x)
{
        int c = 0;
        if(x%2==0)
          c = 1;
        return c;
}
main()
{
int b,a;
cout << "Enter an integer : ";
cin >> b;
a = even(b);
if(a==1)
cout << "even";
else
cout << "odd";
}
