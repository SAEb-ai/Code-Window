#include <bits/stdc++.h>
using namespace std;

void revString(string s){
  if(s.length()==0){
    return;
  }
  revString(s.substr(1));
  cout<<s[0];
}
int main()
{
    revString("binod");
}
