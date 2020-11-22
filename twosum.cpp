#include <iostream>
using namespace std;

bool targetsum(int a[],int n,int k){
  int low=0;
  int high=n-1;
  while(low<high){
    if(a[low]+a[high]==k){
      cout<<low<<" "<<high;
      return true;
    }
    else if(a[low]+a[high]>k)
      high--;
    else
      low++;
      
  }
  return false;
}

int main()
{
   int a[]={4,5,7,9};
   int n=sizeof(a)/sizeof(a[0]);
   int k=11;
   bool tar=targetsum(a,n,k);
   cout<<(tar?"\nElement Found":"Element not found ");
}
