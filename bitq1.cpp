#include <bits/stdc++.h>
using namespace std;

int countset(int n){
  int count=0;
  while(n){
    n=n&(n-1);
    count++;
  }
  return count;
}
int pow2(int n){
  return!(n&&(n&n-1)) ;
}

int main()
{
    cout<<countset(7)<<endl;
    cout<<pow2(8);
}
