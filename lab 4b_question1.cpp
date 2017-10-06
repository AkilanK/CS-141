#include<iostream>
using namespace std;
int power(int x,int n)
{int p;
if(n==0)
p=1;
else 
p=x*power(x,n-1);
return p;
}
main()
{cout<<"enter base and power";
 int x;
int n;
cin>>x>>n;
int p=power(x,n);
cout<<"the value is:"<<p;
}

