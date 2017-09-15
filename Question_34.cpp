#include <iostream>
#include<cmath>
using namespace std;
int main() {
int a,i,j,k;
cout << "Enter number ";
cin >> a;
j = a;
i = 0;
while(j>10)
{
     j = j / 10;
     i++;
}
k = a % 10;
a = a - k + j;
a = (a - j*(pow(10,i))) + k*(pow(10,i));
cout <<"the number after swaping digits is:"<< a;
return 0;
}
