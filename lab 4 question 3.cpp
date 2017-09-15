#include<iostream>
using namespace std;
int m1(int x , int y )
{
        int max;
        if(x>y)
          max = x;
        else
          if(x<y)
             max = y;
  return max;
}
int m2(int x , int y )
{
        int min;
        if(x<y)
          min = x;
        else
           if(x>y)
             min = y;
  return min;
}
main()
{
int x,y,max,min;
cout << "Enter two integers : ";
cin >> x >> y;
max = m1(x,y);
min = m2(x,y);
cout << "Maximum = " << max << "\nMinimum = " << min;
}
