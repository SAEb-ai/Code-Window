#include <bits/stdc++.h>
using namespace std;

void maxArithSub(int a[],int n){
  int curr=a[1]-a[0];
  int d=2;
  int mx=INT_MIN;
  for(int i=2;i<n;i++){
    if((a[i]-a[i-1])==curr){
      d++;
    }
    else{
      curr=a[i]-a[i-1];
      d=2;
    }
    mx=max(mx,d);
  }
  cout<<"Maximum Arithmetic Subarray Length:"<<mx;
}
int main()
{
   int a[]={10,7,4,6,8,10,11};
   int n=sizeof(a)/sizeof(a[0]);
   maxArithSub(a,n);
   return 0;
}
