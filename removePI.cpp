#include <bits/stdc++.h>
using namespace std;

void removePI(string s){
  if(s.length()==0){
    return;
  }
  if(s[0]=='p'&&s[1]=='i')
  {
    cout<<"3.14";
    removePI(s.substr(2));
  }
  else{
    cout<<s[0];
    removePI(s.substr(1));
  }
}
int main()
{
    removePI("pipppxygfpiggpi");
}
