#include <iostream>
using namespace std;
void unique(int a[],int n){
  int xorsum=0;
  for(int i=0;i<n;i++){
    xorsum=xorsum^a[i];
  }
  cout<<xorsum;
}
int main()
{
    int a[]={1,2,3,3,1};
    int n=sizeof(a)/sizeof(a[0]);
    unique(a,n);
    return 0;
}
