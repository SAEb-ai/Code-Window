#include <iostream>
using namespace std;

bool sortedCheck(int a[],int n){
  if(n==1)
    return true;
  bool rest_check=sortedCheck(a+1,n-1);
  return (a[0]<a[1]&&rest_check);
}

int main()
{
    int a[]={4,11,6,10};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<sortedCheck(a,n);
    return 0;
}
