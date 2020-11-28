#include <bits/stdc++.h>
using namespace std;

string moveAllX(string s){
  
  if(s.length()==0)
    return "";
   
  char ch=s[0];
  string ros=moveAllX(s.substr(1));
  if(ch=='x')
    return ros+ch;
  return ch+ros;
}
int main()
{
    cout<<moveAllX("xabcdxgxfrt");
}
