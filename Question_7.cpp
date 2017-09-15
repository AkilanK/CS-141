#include <iostream>
using namespace std;
int main() {
char x;
cout<<"Enter character";
cin>>c;
if((x>'a' & x<'z') || (x>'A' & x<'Z'))
  cout << "The character is an alphabet";
  else
      cout << "The character is NOT an alphabet";
return 0;
}
