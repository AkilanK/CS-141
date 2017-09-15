#include <iostream>
#include<cctype>
using namespace std;
int main() {
char x;
cout<<"Enter character";
cin>>x;
if(isalpha(x))
  cout << "It is an ALPHABET";
  else
  if(isdigit(x))
    cout << "It is a DIGIT";
    else
    cout << "It is a SPECIAL CHARACTER";
return 0;
}
