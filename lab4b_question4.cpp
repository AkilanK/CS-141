#include<iostream>
using namespace std;
int sum(int n)
{int p;
if(n==1)
p=1;
else
p=n+sum(n-1);
return p;
}
main()
{int n;
int p;
cout<<"Enter a number";
cin>>n;
p=sum(n);
cout<<"\nThe sum is:"<<p;
}
