#include<iostream>
using namespace std;
int main (){
float a,b,c,d,e,f,x;
cout<<"Enter marks of five subjects";
cin>>a>>b>>c>>d>>e;
cout<<"\nEnter maximum possible marks per subject";
cin>>x;
cout<<"\nTotal marks obtained:"<<a+b+c+d+e<<"\nAverage marks obatained:"<<(a+b+c+d+e)/5<<"\npercentage of marks obtained:"<<(a+b+c+d+e)*100/(5*x);
}

