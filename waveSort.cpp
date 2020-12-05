#include <iostream>
using namespace std;

void swap(int a[],int i,int j){
  int temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
void waveSort(int a[],int n){
  for(int i=1;i<n;i+=2){
    if(a[i]>a[i-1])
      swap(a,i,i-1);
    if(a[i]>a[i+1]&&i<=n-2)
      swap(a,i,i+1);
  }
}

int main()
{
    int a[]={4,8,2,1,2,9,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    waveSort(a,n);
    for(int i=0;i<8;i++){
      cout<<a[i]<<" ";
    }
    return 0;
}
