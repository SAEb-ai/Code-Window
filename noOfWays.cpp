#include <bits/stdc++.h>
using namespace std;

int noOfWays(int start,int end){
  
  if(start==end)
    return 1;
    
  if(start>end)
    return 0;
  
  int count=0;
  for(int i=1;i<=6;i++){
    count+=noOfWays(start+i,end);
  }
  return count;
}
int main()
{
    cout<<noOfWays(0,3);
    return 0;
}
