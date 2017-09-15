#include <iostream>
#include<cmath>
using namespace std;
int main() {
float a,b,c,d,e,f,percentage;
cout << "Enter marks of 5 subjects respectively ";
cin>>a>>b>>c>>d>>e;
cout << "Enter maximum marks of a subject ";
cin >> f;
percentage = (((a+b+c+d+e+f)/5)/f)*100;
if(percentage>=90)
  cout << "Grade A";
  else
   if(percentage>=80 & percentage<=90)
     cout << "Grade B";
     else
      if(percentage>=70 & percentage<=80)
        cout << "Grade C";
        else
         if(percentage>=60 & percentage<=70)
           cout << "Grade D";
           else
            if(percentage>40 & percentage<=60)
              cout << "Grade E";
              else
               if(percentage<40)
                 cout << "Grade F";
return 0;
}
