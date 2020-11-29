#include <bits/stdc++.h>
using namespace std;

void subStr(string s,string ans){
  
  if(s.length()==0){
    cout<<ans<<endl;
    return;
    }
   
  char ch=s[0];
  string ros=s.substr(1);
  subStr(ros,ans);
  subStr(ros,ans+ch);
}
int main()
{
    subStr("abc","");
}
