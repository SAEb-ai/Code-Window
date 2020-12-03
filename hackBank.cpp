#include <bits/stdc++.h>
using namespace std;

bool hackBank(int a,int n){
  if(a==n)
    return true;
  if(a>n)
    return false;
  if(hackBank(a*10,n)) 
    return true;
  if(hackBank(a*20,n)) 
   return true;
  return false;
}

int main()
{
    int a=1,n=25;
    if(hackBank(a,n))
      cout<<"Yes";
    else
      cout<<"No";
    return 0;
}
