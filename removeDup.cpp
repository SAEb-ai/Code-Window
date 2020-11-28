#include <bits/stdc++.h>
using namespace std;

string removeDup(string s){
  
  if(s.length()==0)
    return "";
   
  char ch=s[0];
  string ros=removeDup(s.substr(1));
  if(ch==ros[0])
    return ros;
  return ch+ros;
}
int main()
{
    cout<<removeDup("aabbbbcdeef");
}
