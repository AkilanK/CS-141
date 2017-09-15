#include <iostream>
using namespace std;
int main() {
char x;
cout<<"Enter character ";
cin>>x;
if(x>'a'&& x<'z')
  cout<<"Its a lower case alphabet";
  else if(x>'A' & x<'Z')
    cout << "It is a upper case alphabet";
return 0;
}
