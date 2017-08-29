#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter number of days";
cin>>a;
cout<<"\nYears:"<<a/365<<"\nMonths:"<<(a%365)/30<<"\nWeeks:"<<(a%30)/7<<"\ndays:"<<a%7;
}
